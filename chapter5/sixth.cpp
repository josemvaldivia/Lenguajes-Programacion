#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for (int i = 0; i<10; i++)
		int a;
	cout << i;

	return 0;
}

/*
	c++ lo permite y el resultado saldria 10
	pero hay que percatarse que hacer eso el ISO c++ que es su standard
	lo prohibe porque es diferente el scope, sin embargo si insistimos en ello
	podemos compilarlo con -fpermissive	

*/