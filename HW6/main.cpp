#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

void fill (int * arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = pow (2,i);
    }
}

void print (int * arr, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << arr[i] << endl;
     }
}

void fill2 (int ** arr, int x, int y)
  {
       srand(static_cast <unsigned int> (time (0) ) );
       for (int i = 0; i < x; i++)
       {

           for (int j = 0; j < y; j++)
           {
               arr[i][j] = rand() % 99;
           }
       }
  }

void print2 (int ** arr, int x, int y)
   {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cout << arr [j][i] << ' ';
            }
            cout << endl;
        }
   }

int main()
 {
    int * pMass;
    int n;
    cout << "Enter size ";
    cin >> n;

    if (n > 0)
    {
        pMass = new (std::nothrow) int[n];
        if (pMass != nullptr)
        {
           fill (pMass, n);
           print (pMass, n);
           delete[] pMass;
           pMass = nullptr;
        }
        else
        {
          cout << "Error! Can not allocate memory!";
        }
     }
            int** pMass2;
            const int x = 4;
            const int y = 4;

            pMass2 = new int * [x];
            for (int i = 0; i < x; i++)
            {
                pMass2[i] = new int[y];
            }

            fill2 (pMass2 , x, y);
            print2 (pMass2, x, y);

           for (int i = 0; i < x; i++)
           {
                delete [] pMass2[i];
           }
            delete[] pMass2;
            pMass2 = nullptr;

           cout << "input file name" << endl;
           string file1;
           cin >> file1;
           ofstream fout ( file1 );
           fout << ",dvzsdnklrgsvurghzdsghlskevbjklasevlkaeurtvbksluerthvbksulerthvbukldrskldhalu";
           fout.close();
           cout << "input second file name" << endl;
           string file2;
           cin >> file2;
           ofstream fout2 ( file2 );
           fout2 << "qwertyuiopasdfghjklzxcvbnm";
           fout2.close();
           ifstream fin1 (file1);
           ifstream fin2 (file2);
           string fs1;
           string fs2;
           cout << fs1 << endl;
           cout << fs2 << endl;
           fin1 >> fs1;
           fin2 >> fs2;
           cout << "input total-file name"<< endl;
           string total;
           cin >> total;
           ofstream finish (total);
           finish << fs1 + fs2;
           finish.close();

    return 0;
 }
