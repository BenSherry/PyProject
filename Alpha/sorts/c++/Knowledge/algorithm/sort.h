//
// Created by SHERRY on 2019/6/22.
//

#ifndef KNOWLEDGE_SORT_H
#define KNOWLEDGE_SORT_H
namespace algorithm
{
    namespace sort
    {
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

    } // namespace sort
} // namespace algorithm
#endif //KNOWLEDGE_SORT_H
