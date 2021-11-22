#include <iostream>

 using namespace std;

int main ()
{
    // 1 //

    const int c=4;
    const int d=6;
    if (c==10 || d==10 || c+d==10)
    {
      cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << endl;

    //2//

    for (int i=1;i<=50;i=i+1)
    {
       if (i%2==1)
       {
           cout << i << " ";
       }
       if (i%10 == 0)
       {
           cout << endl;
       }
    }

    //2//

    cout << endl;
    int a;
    int b;
    cout << "Input number A" << endl;
    cin >> a;
    cout << "input number B" << endl;
    cin >> b;
    if (a+b>=10 && a+b<=20)
    {
        cout << "Summ in range" << endl;
    }
    else
    {
        cout << "not in range" << endl;
    }

    //4//

    cout << endl;
    cout << "input number for check" << endl;
    int zz;
    int check=1;
    cin >> zz;
    for (int i=2;i<zz;i=i+1)
        if (zz%i==0)
        {
                       check=0;
        }
    if (check==1)
    {
        cout << "It is Simple number" << endl;
    }
    else
    {
        cout << "It is not Simple number" << endl;
    }

    //5//

    cout << endl;
    int count =0;
    label1:
    cout << "Input Year from 0 to 3000" << endl;
    int y;
    cin >> y;
      if (count>=10)
      {
          cout << "Bye fool" << endl;
      }
      if (y<0 || y>3000)
     {
          count++;
          goto label1;
     }
     if (y%4==0 && y%100!=0 || y%400==0)
     {
         cout << "Leap ear" << endl;
      }
     else
     {
         cout << "this is not Leap year";
     }

    return 0;
}
