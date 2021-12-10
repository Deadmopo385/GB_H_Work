#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <random>
#include <ctime>

// 0 = O _____ 1 = X  _____ 2 = _
#define XX  5
#define YY  5

void frame(int *f)
    {
        system ("cls");
        for (int i = 0; i < XX * YY; i++)
             {                     
                        switch(f[i])
                        {
                            case 0:
                                std::cout << "O";
                                break;
                            case 1:
                                std::cout << "X";
                                break;
                            default:
                            char c = -33;
                                std::cout << c;
                        }
                         std::cout << " ";
                         if ((i + 1) % YY == 0 && i != 0)
                         {
                             std::cout << std::endl;
                         }
             }
    }

void reset(int *f)
    {
          for (int j = 0; j < XX * YY; j++)
              {                 
                  f[j] = 2;
              }
    }

int inputx(int *f, int x, int y)
{
    if (f[(y-1)*XX+x-1] == 2)
    {
    f[(y-1)*XX+x-1] = 1;
    return 0;
    }
    else
    {
        return 1;
    }
}

void inputo(int *f)
{
    srand(static_cast<unsigned int>(time(0)));
    int j = 0;
    for (int i = 0; i < XX * YY; i++)
    {
        if (f[i] == 2)
        {
            j++;
        }
    }
    int tm[j];
    int k = 0;
    for (int i = 0; i < XX * YY; i++)
    {
        if (f[i] == 2)
        {
            tm[k] = i;
            k++;
        }
    }
    int s = sizeof(tm) / sizeof(tm[0]);
    int puto = rand() % s;
    f[tm[puto]] = 0;
}

char checkwin(int *f)
{
        char who = 'Z';
        int status = 0;
    for (int y = 0; y < YY; y++)
    {
        for (int x = 1; x < XX; x++)
        {
                if ( f[ XX * y + x] == f[ XX * y + x - 1 ] && f[XX * y + x] != 2)
                {
                    status ++;
                }
                    else
                    {
                        status = 0;
                    }
        }
        if (status >= 4)
        {
            switch (f[XX * y])
            {
            case 0:
                who = 'O';
                break;
            case 1:
                who = 'X';
                break;
            default:
                who = 'P';
            }
        }
    }
    for (int x = 0; x < XX ; x++)
    {
        for (int y = 1; y < YY; y++)
        {
                if ( f[ XX * y + x] == f[ (XX * (y - 1)) + x ] && f[XX * y + x] != 2)
                {
                    status ++;
                }
                    else
                    {
                        status = 0;
                    }
        }
        if (status >= 4)
        {
            switch (f[x])
            {
            case 0:
                who = 'O';
                break;
            case 1:
                who = 'X';
                break;
            default:
                who = 'P';
            }
        }
    }
    return who;
}

int main ()
    {
        int * f;
        f = new int [XX * YY];
        reset(f);
        int turn = 0;

       while (checkwin(f) != 'X' && checkwin(f) !='O')
        {
            frame(f);
            turn = turn + 1;
            std::cout << "TURN" << turn << std::endl;
            if (turn % 2 == 1)
            {
                int x, y;
                do
                {
                 checkwin(f);
                   std::cout << "input x coord" << std::endl;
                   std::cin >> x;
                   std::cout << "input y coord" << std::endl;
                   std::cin >> y;
                   std:: cout << "reenter coordinates, stupid skin bag!" << std::endl;
                } while (inputx(f, x, y) ==1);
            }
                else
                    {
                       inputo(f);
                    }
         }

        frame(f);
        std::cout << checkwin(f) << "Wins!";

}
