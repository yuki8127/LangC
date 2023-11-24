#include<stdio.h>
int main(){
    for(int i=1;i<=25;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    int i=26;
    while(i<=50){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }
        
}