#include "Base.hpp"

class C : public Base {
    public :
        void identify(Base* p);
        void identify(Base& p);
};
