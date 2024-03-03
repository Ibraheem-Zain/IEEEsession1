# include <stdio.h>

int main (){
    float num1;
    float num2;

    printf ("enter the frist number:\n");
    scanf ("%f",&num1);
    printf ("enter the second number:\n");
    scanf ("%f",&num2);

    printf ("the sum equals: %.3f\n",num1+num2);
    printf ("the subtraction equals: %.3f\n",num1-num2);
    printf ("the multiplication equals: %.3f\n",num1*num2);
    printf ("the division equals: %.3f\n",num1/num2);

    int altnum1= num1;
    int altnum2= num2;
    printf ("the remainder equals: %d\n",altnum1%altnum2);
}

