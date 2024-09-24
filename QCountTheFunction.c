#include<stdio.h>
static int count=0;
int sum(int a, int b){
    count++;
    return a+b;
}
int main(){
    int a=25;
    int b=26;
    int s=sum(a,b);
    printf("The Sum Function is called %d this much time",count);
    return 0;
}