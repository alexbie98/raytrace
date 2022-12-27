#pragma once

#include <utility>
#include <glm/glm.hpp>
#include "geom/Ray.h"

class Primitive {
    public:
        std::pair<glm::dvec3, glm::dvec3> virtual intersect(const Ray &r) const = 0;
        virtual ~Primitive(){}
};