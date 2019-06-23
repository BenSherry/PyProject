#include <iostream>
#include"algorithm/sort.h"
#include<array>
#include<algorithm>
#include<vector>
const unsigned int NMUS_NUMBER = 10;
using array_sort = std::array<int, NMUS_NUMBER>;

int main() {
    array_sort wait_sort {2, 1 ,5 ,6, 3, 2, 67, 34};
    //algorithm::sort::bubble_sort<array_sort>(wait_sort);
    algorithm::sort::showData(wait_sort);
    algorithm::sort::cocktail_shaker_sort<array_sort>(wait_sort);
    algorithm::sort::showData(wait_sort);
    return 0;
}