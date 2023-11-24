#include<stdio.h>
int 
main(void){
    //1
    printf("Welcome to C Programing!\n");

    //2
    int x,y,z;
    x=10;
    y=2*x;
    z=x+y;
    printf("x=%d\ny=%d\nz=%d\n",x,y,z);

    //3
    int price;
    price=500;
    printf("%.1f\n",price*1.1);
}