#include<stdio.h>
int Y(int x){
    static int y=20;
    y++;
    return(x+y);
}
int a(int x){
    int y;
    y=Y(x);
    return(x+y);

}
int main(){
    int x=5,y=10,i;
    for(i=1;i<=2;i++){
        y+=Y(x)+a(x);
           printf("%d\n",y);
    }
 
    return 0;
}