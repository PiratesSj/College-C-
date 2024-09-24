#include<stdio.h>

int main(){
    int a[5];
        printf("The Base Address of the array %p",a);
        printf("Enter A Number: ");
    for (int i = 0; i < 5; i++) {

        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Number In %d is %d\n", i, a[i]);
    }

    return 0;
}