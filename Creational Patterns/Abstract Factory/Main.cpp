#include "Main.h"

int main(int argc , char** argv)
{
    WinFactory* wf = new WinFactory();
    wf->createProduct();
    wf->createPropertype();
    MacFactory* mf = new MacFactory();
    mf->createProduct();
    mf->createPropertype();
    delete wf;
    delete mf;
    return 0;
}