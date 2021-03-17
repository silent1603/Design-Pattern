#include "Main.h"

int main(int argc , char** argv)
{
    WinFactory wf;
    wf.createProduct();
    wf.createPropertype();
    MacFactory mf;
    mf.createProduct();
    mf.createPropertype();
    return 0;
}