#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cctype>
#include <sstream>
#include <cstdlib>
#include <limits.h>
#include <sys/time.h>
#include <iomanip>

static int recur = 0;

#define BRED "\033[1;31m"
#define RESET "\033[0m"

class Pmerge{
    private:
        std::vector<int> _vectorStack;
        std::deque<int> _dequeStack;
        int _index;

        Pmerge (const Pmerge& cpy);
        Pmerge operator=(const Pmerge& src);
    public:
        // COPLIAN
        Pmerge(char **argv, int size);
        ~Pmerge();

        // Useful functions
        void get_vectorStack(int option);
        void get_dequeStack(int option);
        bool parse_input(char **argv);
        void process();
        bool isSorted();

        // Main algo
        std::vector<int> recursion_sort_vector(std::vector<int> pair_list);
        std::vector<int> merge(std::vector<int> left_half, std::vector<int> right_half);
        std::deque<int> recursion_sort_deque(std::deque<int> pair_list);
};


int jacobsthal(int n);
double get_time_in_microseconds();
size_t binary_search_position_vector(const std::vector<int>& sorted_list, int element);
size_t binary_search_position_deque(const std::deque<int>& sorted_list, int element);
