#pragma once

#include "Primitive.h"

class Sphere : public Primitive {
    public:
        std::pair<glm::dvec3, glm::dvec3> intersect(const Ray &r) const override;
};