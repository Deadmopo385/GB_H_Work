#include <iostream>

using namespace std;
extern int a;
extern int b;

int main()
{
    int c = 89;
    int d = 99;
    float z = a * ( b + (static_cast<float>(c) / d));
    float Arr[3][3] = { {9,9,9,},{9,4,9},{9,9,9} };
    extern int a;
    extern int b;
    float*ArPointer = &Arr[1][1];
    cout << *ArPointer << endl;
    int x = *ArPointer;
    float y = z / x;
    cout << y << endl;
    int XX = (y>9)? 11: 12;
    cout << XX << endl;


    return 0;
}
