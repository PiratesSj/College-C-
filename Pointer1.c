#include <stdio.h>
int main(){
    int a=3;
    int *b=&a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%d\n",*b);
    printf("%p\n",&b);
 
    

    return 0;
}