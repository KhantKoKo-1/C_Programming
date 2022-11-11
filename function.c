#include <stdio.h>

int result(int a , int b);
int pos(int c,int d);
int sub(int e,int f);
int dev(int x,int y);


int main ( ){
    int firnumber =0;
    int secnumber=0;

    printf("Please enter  the first number =",firnumber);

    scanf("%d",&firnumber);

    printf("Please enter the second number =",secnumber);

    scanf("%d",&secnumber);
    printf("This is multi result is =%d\n",result(firnumber,secnumber));
    printf("This is pos result is =%d\n",pos(firnumber,secnumber));
    printf("This is sub result is =%d\n",sub(firnumber,secnumber));
    printf("This is / result is =%d",dev(firnumber,secnumber));



    return 0;
}
int result(int a , int b){

    return a*b;
}
 int pos(int c,int d){

     return c+d;
}
int sub(int e,int f){

    return e-f;}
int dev(int x,int y){
 
  return x/y;
}




