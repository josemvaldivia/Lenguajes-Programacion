#include <iostream>
using namespace std;

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
    cout<< (ZERO + ONE)<<endl;
    cout<< (ONE - TWO)<<endl;
    cout<< (TWO*THREE)<<endl;
    cout<< (SIX/TWO)<<endl;
    
    // Binary operations
    cout<< (FOUR ^ FIVE);
    cout<< (ONE | NINE) <<endl;
    cout <<(TWO << 1)<< endl;
    cout <<(TWO >> 1)<< endl;

    Numbers n = TWO;

    cout << n << endl;
    cout << n + NINE<< endl;
    n = ONE;
    cout << n << endl;
    //n += SIX; no matched operator
    //n = n + SIX; invalid conversion int to numbers(-fpermissive)


    
    return 0;
}

/*
OUTPUT:

1
-1
6
3
19
4
1
2
11
1

*/