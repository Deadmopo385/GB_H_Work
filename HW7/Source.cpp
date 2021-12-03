#include"Source.h"

namespace mylib
{
void filla (float * arr, int size)
   {
    srand(time(NULL));
    for (int i = 0; i < size; i++)
      {
      arr[i] = -100 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-(-100))));
      }
   }

void printa (float * arr, int size)
   {
   for (int i = 0; i < size; i++)
      {
       std::cout << arr[i] << " ";
      }
   std::cout << std::endl;
   }

void printi (int* arr, int size)
   {
   for (int i = 0; i < size; i++)
      {
       std::cout << arr[i] << " ";
      }
   std::cout << std::endl;
   }

void chek (float * arr, int size)
   {
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < size; i++)
       {
        if (arr[i] < 0)
           {
            neg = neg + 1;
           }
            else
           {
           pos++;
           }
       }
    std::cout << "positives" << pos << std::endl << "negatives" << neg << std::endl;
   }
}
