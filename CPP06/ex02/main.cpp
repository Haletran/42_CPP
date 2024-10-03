#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    Base *dyn;
    dyn = generate();
    identify(dyn);
    delete dyn;
}
