#include "Ops.h"

using namespace glm;
using namespace std;

dmat4 translate(const dvec3& x){
    dmat4 mat;

    return mat;
}

dmat4 scale(const dvec3& s){
    dmat4 mat;
    return mat;
}

template<>
dmat4 rot<X>(double angle) {
    cout << "X" << endl;
    return dmat4{};
}

template<>
dmat4 rot<Y>(double angle) {
    cout << "Y" << endl;
    return dmat4{};
}

template<>
dmat4 rot<Z>(double angle) {
    cout << "Z" << endl;
    return dmat4{};
}