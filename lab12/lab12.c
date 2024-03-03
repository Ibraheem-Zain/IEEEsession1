# include <stdio.h>

int main (){
    int what_day;

    printf ("enter the day number\n");
    scanf("%d",&what_day);

    switch (what_day)
    {
    case 1 :
        printf ("today is Sunday.\n");
        break;
    case 2 :
        printf ("today is Munday.\n");
        break;
    case 3 :
        printf ("today is Tuesday.\n");
        break;
    case 4 :
        printf ("today is wednesday.\n");
        break;
    case 5 :
        printf ("today is Thursday.\n");
        break;
    case 6 :
        printf ("today is Friday.\n");
        break;
    
    default:
        printf ("today is Saturday.\n");
        break;
    }
}