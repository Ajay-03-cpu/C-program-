#include <stdio.h>
#include <string.h>
int main() {
    int i,count=0;
    char word[20];                                           
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++){
        if(word[i]>=97&&word[i]<=122)
        printf("%c",word[i]-32);
        else
         printf("%c",word[i]);
           
            }
           
    
    
    
    return 0;
}