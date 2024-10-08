#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "\033[1;32mMUTANT STACK\033[0m" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << "Top value stack : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "SIZE stack : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\033[1;32mSTD::LIST\033[0m" << std::endl;
    std::list<int> mstack2;

    mstack2.push_back(5);
    mstack2.push_back(17);
    std::cout << "Top value stack : " << mstack2.back() << std::endl;
    mstack2.pop_back();
    std::cout << "SIZE stack : " << mstack2.size() << std::endl;

    mstack2.push_back(3);
    mstack2.push_back(5);
    mstack2.push_back(737);
    mstack2.push_back(0);

    std::list<int>::iterator it2 = mstack2.begin();
    std::list<int>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    return 0;
}
