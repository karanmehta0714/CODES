#include <stdio.h>

int main() {
    int r = 9;
    int h = 6;
    printf("The area of rectangle with radius %d is %f \n",r,3.14*r*r); //first%d is for r and %f is formula
    printf("The area of cylinder with radius and height %d %d is %f ",r,h,3.14*r*r*h);//here %d for r and h 
    return 0;
}