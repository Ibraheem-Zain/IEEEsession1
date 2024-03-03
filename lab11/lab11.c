# include <stdio.h>

int main (){
    int degree;

    printf ("enter your degree:\n");
    scanf ("%d",&degree);

    if (0 <= degree && degree < 50){
        printf ("Faild\n");
    }
   else if (50 <= degree && degree < 65){
        printf ("Passed\n");
    }
   else if (65 <= degree && degree < 75){
        printf ("Good\n");
    }
   else if (75 <= degree && degree < 85){
        printf ("Very Good\n");
    }
   else if (85 <= degree && degree <= 100){
        printf ("Excellent\n");
    }
    else {
        printf ("error");
    }
}