#include "SimpleScene.h"

using namespace std;

SimpleScene::SimpleScene() : Scene{"simple"}
{

    // construct scene here

    make_unique<Node>("sphere", make_id());

}
