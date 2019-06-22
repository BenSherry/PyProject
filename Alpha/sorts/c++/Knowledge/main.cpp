#include <iostream>
#include"algorithm/sort.h"
#include<array>
#include<algorithm>
const unsigned int NMUS_NUMBER = 10;
using array_sort = std::array<int, NMUS_NUMBER>;
template<typename T>
void showData(T data)
{
    std::for_each(data.begin(),data.end(),[](int i){std::cout<<i<<" ";});
    std::cout<< std::endl;
}
int main() {
    array_sort wait_sort {2, 1 ,5 ,6, 3, 2, 67, 34};
    algorithm::sort::bubble_sort<array_sort>(wait_sort);
    std::cout << "Hello, World!" << std::endl;
    showData(wait_sort);
    return 0;
}