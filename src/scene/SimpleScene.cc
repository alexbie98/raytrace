#include "SimpleScene.h"
#include <geom/Ops.h>

using namespace std;

SimpleScene::SimpleScene() : Scene{"simple"}
{

    // construct scene here

 
    make_unique<Node>("sphere", make_id());

    rot<X>(35.0);
}
