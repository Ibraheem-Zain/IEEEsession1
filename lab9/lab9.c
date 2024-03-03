# include <stdio.h>

int main (){
    int side1;
    int side2;
    int side3;

    printf ("enter the first side:\n");
    scanf("%d",&side1);
    printf ("enter the second side:\n");
    scanf("%d",&side2);
    printf ("enter the third side:\n");
    scanf("%d",&side3);

    if (side1 == side2 && side2==side3){
        printf ("the triangle is equilateral\n");
    }
    else if (side1 == side2 && side2 != side3){
        printf ("the triangle is isosceles\n");
    }
    else if (side1 == side3 && side2 != side1){
        printf ("the triangle is isosceles\n");
    }
    else if (side3 == side2 && side1 != side3){
        printf ("the triangle is isosceles\n");
    }
    else {
        printf ("the triangle is scalene\n");
    }
}