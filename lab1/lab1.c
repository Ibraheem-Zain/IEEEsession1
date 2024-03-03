# include <stdio.h>

int main (){
    int day;
    int month;
    int year;

    printf("enter the following:-\n");
    printf("birth day:\n");
    scanf("%d",&day);
    printf("birth month:\n");
    scanf("%d",&month);
    printf("birth year:\n");
    scanf("%d",&year);
    
    if (day>30||month>12||1900>year||year>2024)
    {
        printf ("invalide birthday, please try again\n");
    }
    
    else
    { 
        printf ("Hello, *name*!\n");
        printf ("your birthday is %d/%d/%d\n",day,month,year);
    }


}