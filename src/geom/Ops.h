#pragma once

#include <iostream>
#include <glm/glm.hpp>

const glm::dvec3 NULLVEC{-999999.0, -999999.0, -999999.0};

enum Direction
{
    X,
    Y,
    Z
};

glm::dmat4 translate(const glm::dvec3& x);

glm::dmat4 scale(const glm::dvec3& s);

template <Direction d>
glm::dmat4 rot(double angle);