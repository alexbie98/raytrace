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

// template <Direction d, std::enable_if_t<d==X> * = nullptr>
// glm::dmat4 rot(double angle);

// template <Direction d, std::enable_if_t<d==Y> * = nullptr>
// glm::dmat4 rot(double angle);

// template <Direction d, std::enable_if_t<d==Z> * = nullptr>
// glm::dmat4 rot(double angle);

template<Direction d> 
inline glm::dmat4 rot(double angle) {
    std::cout << d << std::endl;
    return glm::dmat4{};
}

template<>
inline glm::dmat4 rot<X>(double angle) {
    std::cout << "X" << std::endl;
    return glm::dmat4{};
}

template<>
inline glm::dmat4 rot<Y>(double angle) {
    std::cout << "Y" << std::endl;
    return glm::dmat4{};
}

template<>
inline glm::dmat4 rot<Z>(double angle) {
    std::cout << "Z" << std::endl;
    return glm::dmat4{};
}