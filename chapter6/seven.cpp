#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>
using namespace std::chrono;

#define MAX_DIMENSION 5000

int array[MAX_DIMENSION][MAX_DIMENSION];

void operator_access(){
    for(int i = 0; i < MAX_DIMENSION ; ++i){
        for(int j = 0; j < MAX_DIMENSION ; ++j){
            array[i][j];
        }
    }
  return;

}

void pointer_access(){
    
    for (int i = 0; i < MAX_DIMENSION; ++i) {
        for (int j = 0; j < MAX_DIMENSION; ++j) {
            *(array + i + j);
        }
    }

}

int main(int argc, char const *argv[])
{

    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    operator_access();
    
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

    std::cout << "It took me " << time_span.count() << " seconds.";
    std::cout<<std::endl;

    t1 = high_resolution_clock::now();

    pointer_access();
    
    t2 = high_resolution_clock::now();

    time_span = duration_cast<duration<double>>(t2 - t1);

    std::cout << "It took me " << time_span.count() << " seconds.";
    std::cout<<std::endl;
    
    return 0;
}

/*
OUTPUT:

It took me 0.0557085 seconds.
It took me 0.0507432 seconds.

*/