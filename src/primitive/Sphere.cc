#include "Sphere.h"
#include <geom/Intersect.h>

using namespace std;
using namespace glm;

pair<dvec3, dvec3> Sphere::intersect(const Ray &r) const {
    return sphere_intersect(r);
}