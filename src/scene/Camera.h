#include "Node.h"

class Camera : public Node {
    public:
        Camera(double fov);
        double fov;
        Ray r;
        double near;
        double aspect; // w/h
};