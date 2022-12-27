#pragma once

#include <string>
#include <vector>
#include <utility>
#include <glm/glm.hpp>
#include "primitive/Primitive.h"

class Node {
    public:
        Node(const std::string& name, size_t id);

        std::string name;
        size_t id;

        glm::dmat4 trans;
        glm::dmat4 invtrans;

        std::vector<std::unique_ptr<Node>> children;
        std::vector<std::unique_ptr<Primitive>> primitives;
};
