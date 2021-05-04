#pragma once

#include <utility>
#include <glm/glm.hpp>
#include "Ray.h"

/**
 * Produces closest intersection between Ray r and a unit sphere centred at (0,0,0)
 * 
 * @return (intersect, normal) or (NULLVEC, NULLVEC) if does not intersect
 * 
 */
std::pair<glm::dvec3, glm::dvec3> sphere_intersect(const Ray& r);

/**
 * Produces closest intersection between Ray r and a unit cube centred at (0,0,0)
 * 
 * @return (intersect, normal) or (NULLVEC, NULLVEC) if does not intersect
 * 
 */
std::pair<glm::dvec3, glm::dvec3> cube_intersect(const Ray& r);

/**
 * Produces closest intersection between Ray r and triangle defined by p1, p2, p3
 * 
 * 
 * @return (intersect, normal) or (NULLVEC, NULLVEC) if does not intersect
 */
std::pair<glm::dvec3, glm::dvec3> triangle_intersect(const Ray& r,
                                                     const glm::dvec3& p1,
                                                     const glm::dvec3& p2,
                                                     const glm::dvec3& p3);


