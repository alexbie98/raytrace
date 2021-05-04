#include "Intersect.h"

#include <glm/gtx/norm.hpp>
#include "Ops.h"

using namespace glm;
using namespace std;

pair<dvec3, dvec3> sphere_intersect(const Ray& r){

    auto b = 2 * dot(r.eye, r.dir);
    auto c = length2(r.eye);
    auto discriminant = b * b - 4 * c;

    if (discriminant < 0){
        return {NULLVEC, NULLVEC};
    }

    auto sqrt_discriminant = sqrt(discriminant);

    auto t1 = -b - sqrt_discriminant;
    if (t1 >= 0){
        auto intersect = r.at(t1);
        return {intersect, intersect};
    }

    auto t2 = -b + sqrt_discriminant;
    if (t2 >= 0){
        auto intersect = r.at(t2);
        return {intersect, intersect};
    }

    return {NULLVEC, NULLVEC};
}

pair<dvec3, dvec3> cube_intersect(const Ray& r){
    return {NULLVEC, NULLVEC};
}

pair<dvec3, dvec3> triangle_intersect(const Ray& r, const dvec3& p1, const dvec3& p2, const dvec3& p3){
    return {NULLVEC, NULLVEC};
}