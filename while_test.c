#include<stdio.h>
int main(){
    int count=1;
    while(count<=10){
        printf("%d\n",count);
        count++;
    }
    printf("\n");
    count=1;
    while(count<=10){
        if(count%2==0){
            printf("%d\n",count);
        }
        count++;
    }
}