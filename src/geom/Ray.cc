#include "Ray.h"

using namespace glm;

Ray::Ray(const dvec3 &eye, const dvec3 &dir) : eye{eye}, dir{normalize(dir)} {}

dvec3 Ray::at(double t) const {
    return eye + t * dir;
}
