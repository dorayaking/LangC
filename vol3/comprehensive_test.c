#include<stdio.h>

int main(){
    int i;
    
    for(i=1;i<26;i++){
        if(i%3==0){
            printf("%d\n", i);
        }        
    }
    while(i>25&&i<=50){
        if(i%3==0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}