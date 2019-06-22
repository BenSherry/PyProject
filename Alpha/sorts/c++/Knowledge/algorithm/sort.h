//
// Created by SHERRY on 2019/6/22.
//

#ifndef KNOWLEDGE_SORT_H
#define KNOWLEDGE_SORT_H
#include<ctime>
#include<algorithm>
namespace algorithm
{
    namespace sort
    {
        template<typename T>
        void showData(T data)
        {
            std::for_each(data.begin(),data.end(),[](int i){std::cout<<i<<" ";});
            std::cout<< std::endl;
        }

        template<typename T>
        void swap(T &left, T &right)
        {
            left ^= right;
            right ^= left;
            left ^= right;
        }

       template<typename T>
       void bubble_sort(T & wait_sort)
       {
           for (int i =0; i< wait_sort.size()-1;i++)
           {
               bool swapped = false;
               for (int j =0; j< wait_sort.size()-1-i;j++)
               {

                   if (wait_sort[j] > wait_sort[j+1])
                   {
                       swap(wait_sort[j], wait_sort[j+1]);
                       swapped = true;
                   }
               }
               if (!swapped)
               {
                   break;
               }
           }
       }

       template<typename T>
       bool is_sorted(T & data)
       {
           int len = data.size();
           for (auto i = 0; i < len -1 ; i++)
           {
               if (data[i] > data[i+1])
               {
                   return false;
               }
           }
           return true;
       }

       template<typename T>
       void bogo_sort(T & wait_sort)
       {
           while (!is_sorted(wait_sort))
           {
               showData(wait_sort);
               srand((unsigned int)time(0));
               std::random_shuffle(wait_sort.begin(),wait_sort.end());
           }
       }

    } // namespace sort
} // namespace algorithm
#endif //KNOWLEDGE_SORT_H
