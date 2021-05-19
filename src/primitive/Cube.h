#pragma once

#include "Primitive.h"

class Cube : public Primitive{
    public:
        std::pair<glm::dvec3, glm::dvec3> intersect(const Ray &r) const override;
};