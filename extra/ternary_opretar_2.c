#include<stdio.h>
void main(){
    int a=10,b=14;
    a==4 ? printf("%d",a):printf("%d",b);    
    a = 4?printf("\n%d",a):printf("%d",b); 
    (a=4)?printf("\n%d",a):printf("%d",b); 
    
}