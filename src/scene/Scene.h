#pragma once

#include "Node.h"

class Scene {

    public:
        Scene(const std::string& name);
        size_t make_id();

        Node* addNode(Node *parent, std::string &name);
        Node* addCube(Node* parent, std::string& name);
        Node* addSphere(Node* parent, std::string& name);
        Node* addMesh(Node* parent, std::string& name);


    private:
        size_t current_id = 0;

    public:
        std::string name;

        std::unique_ptr<Node> graph;
        std::vector<Primitive *> primitives;

        


};