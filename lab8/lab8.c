# include <stdio.h>

int main (){
    float num;

    printf ("enter a number:\n");
    scanf ("%f",&num);

    if (num < 0){
       printf ("the number is negative\n");        
    }
    else {
       printf ("the number is positive\n");
    }
}