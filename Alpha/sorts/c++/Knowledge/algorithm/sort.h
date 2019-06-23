//
// Created by SHERRY on 2019/6/22.
//

#ifndef KNOWLEDGE_SORT_H
#define KNOWLEDGE_SORT_H
#include<ctime>
#include<algorithm>
const int BUCKET_SIZE = 5;
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

       template<typename T>
       void bucket_sort(T & wait_sort)
       {
           if(wait_sort.size() <= 0)
           {
               return;
           }
           auto pmax_num = std::max_element(wait_sort.begin(), wait_sort.end());
           auto pmin_num = std::min_element(wait_sort.begin(),wait_sort.end());
           int bucket_num = (*pmax_num-*pmin_num) / BUCKET_SIZE + 1;
           // to be continue...      
       }

       template<typename T>
       void cocktail_shaker_sort(T & wait_sort)
       {
           auto length = wait_sort.size();
           if (length <= 0)
           {
               return;
           }
           for (auto i = length -1; i > length /2 -1; i--)
           {
               bool swapped = false;
               for (int j = i; j > 0; j--)
               {
                    if (wait_sort[j] < wait_sort[j-1])
                    {
                        swap(wait_sort[j], wait_sort[j-1]);
                        swapped = true;
                    }
               }
               for (int j = 0; j < i; j++)
               {
                   if (wait_sort[j] > wait_sort[j+1])
                   {
                       swap(wait_sort[j], wait_sort[j+1]);
                       swapped = true;
                   }
               }
               if (!swapped)
               {
                   return;
               }
           }
           return;
       }

    } // namespace sort
} // namespace algorithm
#endif //KNOWLEDGE_SORT_H
