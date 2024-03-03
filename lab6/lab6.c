# include <stdio.h>

int main (){
  int num1;
  int num2;

  printf ("enter the frist number:\n");
  scanf ("%d",&num1);
  printf ("enter the second number:\n");
  scanf ("%d",&num2);

  if (num1 > num2){
    printf("%d number is bigger than %d.\n",num1,num2);
  }
  else{
    printf("the second number is bigger than the frist.\n");    
  }
}