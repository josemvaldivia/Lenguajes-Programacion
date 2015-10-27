#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "josemanuel");
   printf("String = %s\n", str);

   free(str);
   printf("String = %s\n", str);   
   return(0);
}
