#include "PmergeMe.hpp"

// vector and deque
int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "Not enough or too much arguments" << std::endl;
        return (1);
    }
    try {
        Pmerge instance(argv, argc);
        if (instance.isSorted() == false)
            throw std::runtime_error("stack not sorted");
    } catch (std::runtime_error &e) {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    return (0);
}
