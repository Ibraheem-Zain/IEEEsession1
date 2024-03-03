# include <stdio.h>

int main (){
    float num1;
    float num2;

    printf ("enter the frist number:\n");
    scanf ("%f",&num1);
    printf ("enter the second number:\n");
    scanf ("%f",&num2);
    
    if (num1 == num2){
        printf ("Both numbers are equal.\n");
    }
    else{
        printf ("the numbers are not equal.\n");
    }
}