#include<stdio.h>
int A(int n){
    static int x=5;
    if (n<=1){
        x=x+7;
    return (3);
    }
    if(n>3){
     return(x+A(n-2));

    }
    return (x+A(n-1));
}
int main(){
    int n=7;
    printf("%d",A(n));
}