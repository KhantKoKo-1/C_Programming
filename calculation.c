#include <stdio.h>

int main (){
    int number = 0;
    int count =1 ;
    int result=0;
    printf("please enter a number =");
   
    scanf("%d",&number);
    
    
    while(count <=12){
        result=number*count;
        printf("%d * %d = %d\n",number,count,result);
        count++;
    }
    
    
    
    
    return 0;
}
 
