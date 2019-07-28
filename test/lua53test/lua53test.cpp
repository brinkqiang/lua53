
#include "lua53.h"

int main( int argc, char* argv[] ) {

    Ilua53* module = lua53GetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
