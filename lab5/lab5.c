# include <stdio.h>

int main (){
   int num1;
   int num2;
   int num3;

   printf ("enter three one-diget numbers:\n");
   printf ("enter the frist number:\n");
   scanf("%d",&num1);
   printf ("enter the second number:\n");
   scanf("%d",&num2);
   printf ("enter the third number:\n");
   scanf("%d",&num3);

   num1 |= (1 << 0);
   num2 ^= (1 << 1);
   num3 ^= (1 << 2);

   printf ("the results are :\n");
   printf ("%d\n",num1);
   printf ("%d\n",num2);
   printf ("%d\n",num3);
   
}