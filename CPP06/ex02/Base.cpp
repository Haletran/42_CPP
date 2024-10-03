#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base * generate(void)
{
    switch(rand() % 3)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        static_cast<void>(a);
    } catch (std::exception &a){
        try {
            B &b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            static_cast<void>(b);
        } catch (std::exception &b) {
            try {
                C &c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                static_cast<void>(c);
            } catch (std::exception & c) {
                std::cerr << c.what() << std::endl;
            }
        }
    }
}
