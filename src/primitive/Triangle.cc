#include "Triangle.h"
#include "geom/Intersect.h"

using namespace std;
using namespace glm;

Triangle::Triangle(const dvec3& p1, const dvec3& p2, const dvec3& p3) : p1{p1}, p2{p2}, p3{p3} {}

pair<dvec3, dvec3> Triangle::intersect(const Ray &r) const {
    return triangle_intersect(r, p1, p2, p3);
}