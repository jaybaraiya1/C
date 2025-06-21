#include<stdio.h>

int main(){
    char *str;
    int count=0;
    scanf("%[^\n]s",str);
    while(*str!='\0'){
        if(*str==' '){
            printf("\n");
           for(int i=count;i>0;i--){
            printf(" ");
           }
        }
        else{
            printf("%c",*str);
            count++;
        }
        str++;
            
    }
    return 0;

}