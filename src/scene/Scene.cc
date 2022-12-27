#include "Scene.h"

#include "primitive/Cube.h"
#include "primitive/Sphere.h"
#include "primitive/Triangle.h"

using namespace std;

Scene::Scene(const string &name) : name{name}, graph{make_unique<Node>("root", make_id())} {};

size_t Scene::make_id(){
    return current_id++;
}

Node* Scene::addNode(Node* parent, std::string& name){
    parent->children.push_back(make_unique<Node>(name, make_id()));
    return parent->children.back().get();
}

Node* Scene::addCube(Node* parent, std::string& name){
    Node * n = addNode(parent, name);
    n->primitives.push_back(make_unique<Cube>());
    primitives.push_back(n->primitives.back().get());
    return n;
}

Node* Scene::addSphere(Node* parent, std::string& name) {
    Node * n = addNode(parent, name);
    n->primitives.push_back(make_unique<Sphere>());
    primitives.push_back(n->primitives.back().get());
    return n;
}

Node* Scene::addMesh(Node* parent, std::string& name) {
    Node * n = addNode(parent, name);
    // construct mesh
    primitives.push_back(n->primitives.back().get());
    return n;
}