#include <iostream>
#include"algorithm/sort.h"
#include<array>
#include<algorithm>
const unsigned int NMUS_NUMBER = 10;
using array_sort = std::array<int, NMUS_NUMBER>;

int main() {
    array_sort wait_sort {2, 1 ,5 ,6, 3, 2, 67, 34};
    std::cout<<algorithm::sort::is_sorted(wait_sort)<<std::endl;
    algorithm::sort::bubble_sort<array_sort>(wait_sort);
    return 0;
}