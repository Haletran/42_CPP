#include "PmergeMe.hpp"


double get_time_in_microseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000000 + time.tv_usec;
}

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

// erase pas trop opti, mieux vaut opter pour un index
std::vector<int> Pmerge::recursion_sort_vector(std::vector<int> pair_list)
{
    if (pair_list.size() <= 1)
        return (pair_list);

    // divise la liste en deux parties de paires (sous-vecteur)
    std::vector<int> left_half(pair_list.begin(), pair_list.begin() + pair_list.size() / 2);
    std::vector<int> right_half(pair_list.begin() + pair_list.size() / 2, pair_list.end());

    // puis divise encore en moitie jusqu'a atteindre la condition de base (1 donc plus de paire possible)
    left_half = recursion_sort_vector(left_half);
    right_half = recursion_sort_vector(right_half);

    std::vector<int> merged;

    // fusionne et tri les trucs restants
    while (!left_half.empty() && !right_half.empty())
    {
        if (left_half.front() <= right_half.front())
        {
            merged.push_back(left_half.front());
            left_half.erase(left_half.begin());
        }
        else
        {
            merged.push_back(right_half.front());
            right_half.erase(right_half.begin());
        }
    }

    // si contient encore des elements
    while (!left_half.empty())
    {
        merged.push_back(left_half.front());
        left_half.erase(left_half.begin());
    }

    while (!right_half.empty())
    {
        merged.push_back(right_half.front());
        right_half.erase(right_half.begin());
    }

    return (merged);
}


std::deque<int> Pmerge::recursion_sort_deque(std::deque<int> pair_list)
{
    if (pair_list.size() <= 1)
        return (pair_list);

    std::deque<int> left_half(pair_list.begin(), pair_list.begin() + pair_list.size() / 2);
    std::deque<int> right_half(pair_list.begin() + pair_list.size() / 2, pair_list.end());

    left_half = recursion_sort_deque(left_half);
    right_half = recursion_sort_deque(right_half);

    std::deque<int> merged;

    while (!left_half.empty() && !right_half.empty())
    {
        if (left_half.front() <= right_half.front())
        {
            merged.push_back(left_half.front());
            left_half.erase(left_half.begin());
        }
        else
        {
            merged.push_back(right_half.front());
            right_half.erase(right_half.begin());
        }
    }

    while (!left_half.empty())
    {
        merged.push_back(left_half.front());
        left_half.erase(left_half.begin());
    }

    while (!right_half.empty())
    {
        merged.push_back(right_half.front());
        right_half.erase(right_half.begin());
    }

    return (merged);
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
