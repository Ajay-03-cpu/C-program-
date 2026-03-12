#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char word[20],letter;                                   
   scanf("%s",word);
   scanf(" %c",&letter);
    for(i=0;word[i]!='\0';i++){
        if(word[i]==letter){
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}