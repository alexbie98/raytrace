#pragma once

#include "Primitive.h"

class Triangle : public Primitive {
    public:
        Triangle(const glm::dvec3 &p1, const glm::dvec3 &p2, const glm::dvec3 &p3);
        std::pair<glm::dvec3, glm::dvec3> intersect(const Ray &r) const override;

    private:
        glm::dvec3 p1;
        glm::dvec3 p2;
        glm::dvec3 p3;
};