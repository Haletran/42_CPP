#include "PmergeMe.hpp"
#include <stdexcept>

// vector and deque
int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "Not enough or too much arguments" << std::endl;
        return (1);
    }
    try {
        Sorting instance(argv, argc);

        instance.get_dequeStack();
        instance.get_vectorStack();
    } catch (std::runtime_error &e)
    {
        std::cerr << "Error : " << e.what() << std::endl;
    }
    return (0);
}
