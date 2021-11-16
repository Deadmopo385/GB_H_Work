#include <iostream>
int main()
{
    int age = 35;
    float skill;
    skill = 56.9;
    enum cell { cross, circle, empty };
    cell game[3][3] {{cross, cross, circle}, {cross, circle, cross,},{circle,cross,empty}};

    struct Field
    {
        bool Fill;
        short content;
        short turn_number;
    };
    return 0;
}



