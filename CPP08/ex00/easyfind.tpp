#include "easyfind.hpp"

template <typename T> bool easyfind(T & temp, int raw)
{
    if (std::find(temp.begin(), temp.end(), raw) != temp.end()) {
        return (true);
    } else {
        throw std::runtime_error("Not found !!");
    }
    return (false);
}
