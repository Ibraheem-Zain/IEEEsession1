# include <stdio.h>

int main (){
    int num1;
    int num2;
    char operator;

    printf ("enter the first number:\n");
    scanf("%d",&num1);
    printf ("enter the second number:\n");
    scanf("%d",&num2);
    printf ("enter your operator:\n");
    printf ("'x' for multiplication.\n");
    printf ("'d' for division.\n");
    printf ("'s' for summation.\n");
    printf ("'b' for subtraction.\n");
    printf ("'r' for remainder.\n");
    scanf(" %c",&operator);

    switch (operator)
    {
    case 'x':
        printf ("%d\n",num1 * num2);
        break;
    case 'd':
        printf ("%d\n",num1 / num2);
        break;
    case 's':
        printf ("%d\n",num1 + num2);
        break;
    case 'b':
        printf ("%d\n",num1 - num2);
        break;
    case 'r':
        printf ("%d\n",num1 % num2);
        break;
    
    default:
        printf ("invalide operator.\n");
        break;
    }
}