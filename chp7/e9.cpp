#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>
using namespace std::chrono;

void floating_point(){
	float a = 10.41;
	float b = 15.254;

	for (int i=0; i<10000l; i++){
		a+b;
		a+=b;
		b+=a;
		a/b;
	}

}

void int_func(){
	int a = 10;
	int b = 15;

	for (int i=0; i<10000l; i++){
		a+b;
		a+=b;
		b+=a;
		a/b;
	}
}

int main(int argc, char const *argv[])
{


	high_resolution_clock::time_point t1 = high_resolution_clock::now();

 	for(int i = 0; i < 100000; i++)
		floating_point();
    
  high_resolution_clock::time_point t2 = high_resolution_clock::now();

  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);

  std::cout << "It took me " << time_span.count() << " seconds.";
  std::cout<<std::endl;

t1 = high_resolution_clock::now();

 	for(int i = 0; i < 100000; i++)
		int_func();
    
t2 = high_resolution_clock::now();

time_span = duration_cast<duration<double>>(t2 - t1);

  std::cout << "It took me " << time_span.count() << " seconds.";
std::cout<<std::endl;

 
	return 0;
}

/*
Result:
	It took me 4.6371 seconds.
	It took me 3.72643 seconds.

	Las operaciones en punto flotante demorarán mas
	ya que tiene mas carga al realizar la operación
*/