#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        // COPLIAN
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& cpy);
        MutantStack& operator=(const MutantStack& src);

};


#include "MutantStack.tpp"
