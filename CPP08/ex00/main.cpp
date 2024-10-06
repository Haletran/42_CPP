#include "easyfind.hpp"

int main(int argc, char **argv)
{
    std::vector<int> arr;
    int to_find = 2;
    srand(time(0));

    if (argc <= 1 )
    {
        for (int i = 0; i < 5; i++)
            arr.push_back(rand() % 10);
    }
    else {
        for (int i = 1; i < argc; i++)
            arr.push_back(std::strtod(argv[i], NULL));
    }

    std::cout << "Array : ";
    for (int i = 0; i < (int)arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << "To find : " << to_find << std::endl;

    try {
        easyfind(arr, to_find);
        std::cout << GREEN "Found !!" RESET << std::endl;
    } catch (const std::runtime_error &e) {
        std::cout << RED << e.what() << RESET <<std::endl;
    }
    return (0);
}
