#include "iter.hpp"

int main()
{
    int test[3] = {1, 2, 3};
    std::cout << "Int array : ";
    iter(test, 3, printElement<int>);
    std::cout << std::endl;

    std::string st[2] = {"Test1", "Test2"};
    std::cout << "String array : ";
    iter(st, 2, printElement<std::string>);
    std::cout << std::endl;
}
