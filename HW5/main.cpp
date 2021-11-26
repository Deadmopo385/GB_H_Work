#include <iostream>

using namespace std;

bool balanced = 0;
int suml = 0;
int sumr = 0;

  bool PrintArr (double arr[], int size)
  {
    for (int i = 0; i < size; i++)
    {
     cout << arr[i] << " ";
    }
    cout << endl;
       return true;
  }

   int Rebuild (int array[8])
  {
    for (int i = 0; i < 8; i++)
    {
       cout << array[i] << " ";
    }
    cout << endl;

    int ChArr[8];

    for (int i = 0; i < 8; i++)
    {
        if (array[i] == 1)
        {
        ChArr[i] = 0;
        }
        else
        {
        ChArr[i] = 1;
        }
     }

    for (int i = 0; i < 8; i++)
    {
       cout << ChArr[i] << " ";
    }
    cout << endl;
    cout << endl;

    return 0;
   }

   bool fill (int aaa[8])
   {
       int b[8] {1, 4, 7, 10, 13, 16, 19, 22};
       for (int i=0; i<8; i++)
       {
           aaa[i] = b[i];
       }

       for (int i = 0; i < 8; i++)
       {
          cout << aaa[i] << " ";
       }
       cout << endl << endl;
       return 0;
   }

   bool ArrShift (double shifta[], int shif, int k)
   {
            double shiftb [k];
       for (int i=0; i<k; i++)
           shiftb [i] = shifta [i+shif];
       for (int i = 0; i<k; i++)
           shifta[i] = shiftb[i];
       return true;
   }

   int arrsuml (int bal[], int n)
   {
       for (int i = 0; i < n; i++)
           suml = suml + bal[i];
       return 0;
   }

   int arrsumr (int bal[], int n, int length)
   {
        for (int i = n; i < length; i++)
           sumr = sumr + bal[i];
       return 0;
   }

   void balance (int bal[], int length)
   {
       for (int i = 0; i < length; i++)
       {
            arrsuml (bal, i);
            arrsumr (bal, i, length);
           if ( ::suml == ::sumr )
               ::balanced = true;
       }
   }

   int main ()
 {
     double arr [4] {3, 3.14, 3, 3};
     int size = 4;
     int array[8] {1,0,0,1,1,0,0,1};
     int aaa[8];
     PrintArr ( arr, size);
     cout << endl;
     Rebuild (array);
     fill(aaa);

     double shifta[]{8,2,5,6,8,4,1,2,5,5,4,7,8,5,2,1};
     int shift = 2;
     int k = sizeof(shifta)/sizeof(shifta[0]);
     PrintArr (shifta, k);
     ArrShift (shifta, shift, k);
     for (int i=0; i < k; i++)
     {
        cout << shifta[i] << " ";
     }
     cout << endl;
     cout << endl;

     int bal[]{8,8,4,4,5,4};
     int length = sizeof(bal) / sizeof (bal[0]);

     balance(bal, length);
     cout << balanced;


     return 0;
 }
