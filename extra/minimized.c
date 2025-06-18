#include<stdio.h>
void main(){
    int number,new_number=0,min;
    printf("Enter number");
    Scanf("%d",&number);
    int c=number;
    while(number>0){
        a=number%10;
        min=a;
        while(c>0){
            b=c%10;
            if(min<b){
                break;
            }
            else{
                min=b;
            }
            c=c/10;
        }
        new_number=new_number*10+min
        number=number/10;
        }

        pr("%d",new_number);
}