#include <iostream>
#include <fstream>
#include <vector>
#include <glm/glm.hpp>
#include "Render.h"

using namespace std;
using namespace glm;

void save(const string& name, size_t w, size_t h, const vector<dvec3>& buffer){

   ofstream f;
   f.open(name.c_str());

   f << "P3\n" << w << " " << h << "\n255\n";

    for (size_t y = 0; y < h; y++){
        for (size_t x = 0; x < w; x++){
            const dvec3 &pixel = buffer[(h - y - 1) * w + x];
            int ir = static_cast<int>(255.999 * pixel.r);
            int ig = static_cast<int>(255.999 * pixel.g);
            int ib = static_cast<int>(255.999 * pixel.b);
            f << ir << " " << ig << " " << ib << " " << endl;
        }
    }
   f.close();
}

int main(int argc, const char * argv[]){

    const size_t w = 256;
    const size_t h = 256;

    vector<dvec3> buffer{w * h};

    render(buffer, w, h);

    save("img.ppm", w, h, buffer);

    return 0;
}