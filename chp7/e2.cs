using System.IO;
using System;

class Program
{
    static int* fun(int  k){
        k += 4;
 	    return 3 * (k) - 1;
    }
    static void Main()
    {
        int i = 10, j = 10, sum1, sum2;
 	    sum1 = (i / 2) + fun(i);
 	    sum2 = fun(j) + (j / 2);
 	    Console.WriteLine(sum1);
 	    Console.WriteLine(sum2);
 	    
    }
}

/*
	Muy parecido a Java, C# no permite el uso de punteros
	ya que es muy inseguro, el resultado sera 46 y 46
*/
