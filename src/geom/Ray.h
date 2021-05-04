#pragma once

#include <glm/glm.hpp>

class Ray {
    public:
        Ray(const glm::dvec3 &eye, const glm::dvec3 &dir);

        glm::dvec3 at(double t) const;

        const glm::dvec3 eye;
        const glm::dvec3 dir;
};