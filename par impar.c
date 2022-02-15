#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int nr;

   printf("Introduceti un nr pentru a stabili daca este par sau impar:\n");
   scanf("%d",&nr);


   if((nr%2)==0)
   {
    printf("Numarul introdus este par\n");
   }
   else
   {
    printf("Numarul introdus este impar.");
   }


    return 0;