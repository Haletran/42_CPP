#pragma once

#include <stack>
#include <list>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        // COPLIAN
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& cpy);
        MutantStack& operator=(const MutantStack& src);

        // alias de type vers container (Deque, vector ou list) nomme iterator
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};



#include "MutantStack.tpp"
