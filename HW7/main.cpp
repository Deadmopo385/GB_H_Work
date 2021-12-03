#include "Source.h"

#define CIN(n, z)  ( n > 0 && n < z) ? true : false;
#define SIZEARR 6
#define SWAP(a, b)    int t = a;\
                                 a = b;\
                                 b = t;
int main()
   {

        float* parr;
        int n;
        int z;

        std::cout << "Enter size of your array: " << std::endl;
        std::cin >> n;

        std::cout << "Enter limit: " << std::endl;
        std::cin >> z;

        bool y = CIN (n, z)
        if (y)
           {
           std::cout << "In range" << std::endl;
           }
           else
          {
          std::cout << "Not In range!!!" << std::endl;
          }

        if (n > 0)
        {
            parr = new (std::nothrow) float[n];
            if (parr != nullptr)
            {
                mylib::filla(parr,n);
                mylib::printa(parr,n);
                mylib::chek(parr, n);

                delete[] parr;
                parr = nullptr;
            }
            else
               {
                 std::cout << "Error! Can not allocate memory!";
               }
        }
  int array[SIZEARR];
        for (int i = 0; i < SIZEARR; i++)
        {
         std::cout << "input element " << i << std::endl;
         std::cin >> array[i];
        }
         mylib::printi(array,SIZEARR);

         for(int i = 1; i < SIZEARR; ++i)
         {
             for(int r = 0; r < SIZEARR - i; r++)
             {
                 if(array[r] < array[r+1])
                 {
                     SWAP(array[r], array[r+1]);
                 }
             }
         }
         mylib::printi(array,SIZEARR);
         std::cout << "the biggest is" << array[0];
         return 0;
   }
