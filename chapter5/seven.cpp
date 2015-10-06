#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>
using namespace std::chrono;

void static_func()
{
	int x[10000];
}

void dynamic_func(int n)
{
	int x[n];
}

void heap_func(int n)
{
	int* x = new int[n];
}

int main(int argc, char const *argv[])
{


	high_resolution_clock::time_point t1 = high_resolution_clock::now();

 	for(int i = 0; i < 100000; i++)
		static_func();
    
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  std::cout << "It took me " << time_span.count() << " seconds.";
  std::cout<<std::endl;

t1 = high_resolution_clock::now();

 	for(int i = 0; i < 100000; i++)
		dynamic_func(10000);
    
t2 = high_resolution_clock::now();

time_span = duration_cast<duration<double>>(t2 - t1);

  std::cout << "It took me " << time_span.count() << " seconds.";
std::cout<<std::endl;
t1 = high_resolution_clock::now();

 	for(int i = 0; i < 100000; i++)
		heap_func(10000);
    
t2 = high_resolution_clock::now();

time_span = duration_cast<duration<double>>(t2 - t1);

  std::cout << "It took me " << time_span.count() << " seconds.";
std::cout<<std::endl;






	 
	return 0;
}