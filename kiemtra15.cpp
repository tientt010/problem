#include<stdio.h>

int fibonachi(int n){
    if(n==1)return 1;
    if(n==2)return 1;
    else return fibonachi(n-1)+fibonachi(n-2);
}
int main(){
    int n;
    for(n= 1;n<93; n++){
    printf("%d",fibonachi(n));}
}