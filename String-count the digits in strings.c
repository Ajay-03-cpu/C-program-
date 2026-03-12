#include <stdio.h>
#include <string.h>
int main() {
    int i,count=0;
    char word[20];                                           
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++){
        if(word[i]>=48&&word[i]<=57)
            count++;
           
            }
           
    printf("%d",count);
    
    
    return 0;
}