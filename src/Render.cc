#include "Render.h"

using namespace std;
using namespace glm;

void render(vector<dvec3> &buffer, size_t w, size_t h)
{
    for (size_t y = 0; y < h; y++){
        for (size_t x = 0; x < w; x++){

            dvec3 colour{ y/(double) (h-1), y/(double) (h-1), 0.2};

            buffer[y * w + x].r = colour.r;
            buffer[y * w + x].g = colour.g;
            buffer[y * w + x].b = colour.b;
        }
    }
}