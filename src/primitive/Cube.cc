#include "Cube.h"
#include <geom/Intersect.h>

using namespace std;
using namespace glm;

pair<dvec3, dvec3> Cube::intersect(const Ray &r) const {
    return cube_intersect(r);
}