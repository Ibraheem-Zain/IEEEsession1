# include <stdio.h>

int main (){
    int num;

    printf ("enter the number:\n");
    scanf ("%d",&num);

    (num < 0) ? (printf ("the absolute equals: %d\n",num *= -1)) : (printf ("the absolute equals: %d\n",num));
}