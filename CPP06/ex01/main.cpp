#include "Serializer.hpp"

int main()
{
    Data *test = new Data();
    uintptr_t raw;

    std::cout << "Base Data : " << test << std::endl;
    raw = Serializer::serialize(test);
    std::cout << "Serialize Data : " << raw << std::endl;
    test = Serializer::deserialize(raw);
    std::cout << "Deserialize Data : " << test << std::endl;
    delete test;
}
