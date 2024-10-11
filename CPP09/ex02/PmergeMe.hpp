#pragma once

#include <iostream>
#include <vector>
#include <deque>

class Sorting{
    private:
        std::vector<int> _vectorStack;
        std::deque<int> _dequeStack;
    public:
        // COPLIAN
        Sorting(char **argv, int size);
        ~Sorting();
        Sorting (const Sorting& cpy);
        Sorting operator=(const Sorting& src);

        void get_vectorStack();
        void get_dequeStack();
};
