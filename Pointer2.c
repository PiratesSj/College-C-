#include <stdio.h>

int main(){
    int a=10;
    int *b=&a;
    int **c=&b;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%d\n",*b);
    printf("%p\n",&b);
    printf("%d\n",**c);
    printf("%p\n",&c);
    return 0;

}