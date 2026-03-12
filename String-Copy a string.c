#include <stdio.h>
#include <string.h>
int main() {
    int i;
    char word[20],word2[20];                                   
   scanf("%s",word);
    for(i=0;word[i]!='\0';i++){
        word2[i]=word[i];
        }
    printf("%s",word2);
    return 0;
}