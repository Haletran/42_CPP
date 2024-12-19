#include "PmergeMe.hpp"
#include <vector>


// PARSING and INIT list
Pmerge::Pmerge(char **argv, int size) : _index(0)
{
    if (parse_input(argv) == true)
        throw std::runtime_error("Input not valid");
    for (int j = 1; j < size; j++)
    {
        std::string value = argv[j];
        std::stringstream ss(value);
        double conv_num;
        while(ss >> conv_num)
        {
            if (conv_num > static_cast<double>(INT_MAX))
                throw std::runtime_error("Number exceeds maximum integer value");
            int num = static_cast<int>(conv_num);
            _vectorStack.push_back(num);
            _dequeStack.push_back(num);
        }
    }
    process();
}

Pmerge::~Pmerge() {}

void Pmerge::process()
{
    std::cout << "==================" << std::endl;
    get_vectorStack(0);
    double before = get_time_in_microseconds();
    _vectorStack = recursion_sort_vector(_vectorStack);
    double after = get_time_in_microseconds();
    get_vectorStack(1);
    std::cout << "Time to process a range of "<< _vectorStack.size() <<  " elements with std::vector : " << std::fixed << std::setprecision(4) << (after - before) << " µs" << std::endl;
    std::cout << "==================" << std::endl;
    get_dequeStack(0);
    before = get_time_in_microseconds();
    recur = 0;
    _dequeStack = recursion_sort_deque(_dequeStack);
    after = get_time_in_microseconds();
    get_dequeStack(1);
    std::cout << "Time to process a range of "<< _dequeStack.size() <<  " elements with std::deque : " << std::fixed << std::setprecision(4) << (after - before)<< " µs"<< std::endl;
    std::cout << "==================" << std::endl;
}

void Pmerge::get_vectorStack(int option)
{
    int  iterator;
    if (_vectorStack.empty())
        throw std::runtime_error("Vector stack is empty");
    std::cout << ((option == 0) ? "Before (vector) : " : "After (vector) : ");
    if (_vectorStack.size() > 6)
        iterator = 6;
    else
        iterator = (int)_vectorStack.size();
    for (int i = 0; i < iterator; i++)
        std::cout << _vectorStack[i] << " ";
    if (iterator == 6)
        std::cout << "[...] (" << _vectorStack.size() - 5 << " more)";
    std::cout << std::endl;
}

void Pmerge::get_dequeStack(int option)
{
    int iterator;
    if (_dequeStack.empty())
        throw std::runtime_error("Deque stack is empty");
    std::cout << ((option == 0) ? "Before (deque) : " : "After (deque) : ");
    if (_dequeStack.size() > 6)
        iterator = 6;
    else
        iterator = (int)_dequeStack.size();
    for (int i = 0; i < iterator; i++)
        std::cout << _dequeStack[i] << " ";
    if (iterator == 6)
        std::cout << "[...] (" << _dequeStack.size() - 5 << " more)";
    std::cout << std::endl;
}

std::vector<int> Pmerge::recursion_sort_vector(std::vector<int> pair_list)
{
    if (pair_list.size() <= 1 || recur == 1) {
        return pair_list;
    }

    std::vector<int> new_list;
    for (size_t i = 0; i < pair_list.size(); i += 2) {
        if (i + 1 < pair_list.size()) {
            new_list.push_back(pair_list[i]);
            new_list.push_back(pair_list[i + 1]);
        } else {
            new_list.push_back(pair_list[i]);
        }
    }

    for (size_t i = 0; i < new_list.size(); i += 2) {
        if (i + 1 < new_list.size() && new_list[i] > new_list[i + 1]) {
            std::swap(new_list[i], new_list[i + 1]);
        }
    }
    recur++;
    std::vector<int> output = recursion_sort_vector(new_list);
    std::vector<int> sorted_list;

    int jacob_idx = 2;
    while (!output.empty()) {
        int jacob = jacobsthal(jacob_idx) % output.size();
        if (jacob == 0)
            jacob_idx++;

        int element = output[jacob];
        output.erase(output.begin() + jacob);

        size_t pos = binary_search_position_vector(sorted_list, element);
        sorted_list.insert(sorted_list.begin() + pos, element);

        if (jacob >= (int)output.size()) {
            jacob_idx = 2;
        }
    }
    return (sorted_list);
}

std::deque<int> Pmerge::recursion_sort_deque(std::deque<int> pair_list)
{
    if (pair_list.size() <= 1 || recur == 1) {
        return pair_list;
    }

    std::deque<int> new_list;
    for (size_t i = 0; i < pair_list.size(); i += 2) {
        if (i + 1 < pair_list.size()) {
            new_list.push_back(pair_list[i]);
            new_list.push_back(pair_list[i + 1]);
        } else {
            new_list.push_back(pair_list[i]);
        }
    }

    for (size_t i = 0; i < new_list.size(); i += 2) {
        if (i + 1 < new_list.size() && new_list[i] > new_list[i + 1]) {
            std::swap(new_list[i], new_list[i + 1]);
        }
    }
    recur++;
    std::deque<int> output = recursion_sort_deque(new_list);
    std::deque<int> sorted_list;

    int jacob_idx = 2;
    while (!output.empty()) {
        int jacob = jacobsthal(jacob_idx) % output.size();
        if (jacob == 0)
            jacob_idx++;

        int element = output[jacob];
        output.erase(output.begin() + jacob);

        size_t pos = binary_search_position_deque(sorted_list, element);
        sorted_list.insert(sorted_list.begin() + pos, element);

        if (jacob >= (int)output.size()) {
            jacob_idx = 2;
        }
    }
    return (sorted_list);
}

bool Pmerge::isSorted()
{
    if (_vectorStack.size() <= 1)
        return (true);

    for (int i = 0; i < (int)_vectorStack.size() - 1; i++)
    {
        if (_vectorStack[i] > _vectorStack[i + 1])
        {
            std::cout << "Vector stack not sorted at " << i << " position : " << _vectorStack[i] << " > " << _vectorStack[i + 1] << std::endl;
            return (false);
        }
    }

    if (_dequeStack.size() <= 1)
        return (true);

    for (int i = 0; i < (int)_dequeStack.size() - 1; i++)
    {
        if (_dequeStack[i] > _dequeStack[i + 1])
        {
            std::cout << "Deque stack not sorted at " << i << " position : " << _dequeStack[i] << " > " << _dequeStack[i + 1] << std::endl;
            return (false);
        }
    }
    return (true);
}

bool Pmerge::parse_input(char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        std::string value = argv[i];
        for (int i = 0; value[i]; i++)
        {
            if (value[i] != 32 && !std::isdigit(value[i]))
                return (true);
        }
    }
    return (false);
}
