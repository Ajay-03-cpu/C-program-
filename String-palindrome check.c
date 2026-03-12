#include <stdio.h>
#include <string.h>
int main() {
    int i,j,pal=1;
    char word[20];                                           
    scanf("%s",&word);
    for(i=0;i<strlen(word)/2;i++){
            if(word[i]!=word[strlen(word)-1-i]){
                pal=1;
                break;
            }
            else{
                pal=0;
            }
    }
    if(pal==0){
        printf("Palindrom");
    }
    else{
        printf("Not a palindrom");
    }
    return 0;
}