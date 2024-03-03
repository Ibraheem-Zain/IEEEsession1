# include <stdio.h>

int main (){
    int num1;
    int num2;

    printf ("enter the first number:\n");
    scanf ("%d",&num1);
    printf ("enter the second number:\n");
    scanf ("%d",&num2);

    switch (num1>num2)
    {
    case 0:
        printf ("the second number (%d) is bigger\n",num2);
        break;

    case 1:
        printf ("the first number (%d) is bigger\n",num1);
        break;

    default:
        printf ("both numbers are equal.\n");
        break;
    }
}