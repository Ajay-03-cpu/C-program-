#include <stdio.h>
int main() {
    int i,count = 0;
    char word[100];
    fgets(word,100,stdin);
    for(i=0;word[i]!='\0';i++) {
        if((word[i]!=' '&&word[i]!='\n')&& 
           (i==0||word[i-1]==' ')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}