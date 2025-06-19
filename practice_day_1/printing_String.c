#include<stdio.h>

int main(){
    char *str;
    scanf("%[^\n]s",str);
    while(*str!='\0'){
        if(*str==' '){
            printf("\n");
        }
        else{
            printf("%c",*str);
        }
        str++;
            
    }
    return 0;

}