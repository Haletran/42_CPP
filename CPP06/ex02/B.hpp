#include "Base.hpp"

class B : public Base {
    public :
        void identify(Base* p);
        void identify(Base& p);
};
