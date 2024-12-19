#include "PmergeMe.hpp"

int jacobsthal(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

double get_time_in_microseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000000 + time.tv_usec;
}

size_t binary_search_position_vector(const std::vector<int>& sorted_list, int element) {
    int left = 0;
    int right = sorted_list.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sorted_list[mid] == element)
            return mid;

        if (sorted_list[mid] < element)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}



size_t binary_search_position_deque(const std::deque<int>& sorted_list, int element) {
    int left = 0;
    int right = sorted_list.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sorted_list[mid] == element)
            return mid;

        if (sorted_list[mid] < element)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left;
}
