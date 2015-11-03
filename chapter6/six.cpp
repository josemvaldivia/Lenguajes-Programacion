#include <iostream>
using namespace std;

enum Days{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

enum Numbers{
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};

int main(int argc, char const *argv[])
{
    Days my_day = MONDAY;
    Numbers my_number = TWO;

    cout<< (MONDAY + TWO)<<endl;
    cout << my_day + my_number<<endl;


    int int_day = 0;
    int int_num = 2;

    cout << int_day + int_num << endl;
    cout << 0 + 2<< endl;


    return 0;
}

/*
OUTPUT:

2
2
2
2

Readability: MORE WITH ENUM

*/