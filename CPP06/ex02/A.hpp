#include "Base.hpp"

class A : public Base {
    public :
        void identify(Base* p);
        void identify(Base& p);
};
