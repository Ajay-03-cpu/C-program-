#include <stdio.h>

int main() {
    int i,count=0;
    char n[20];
    scanf("%s",&n);
    for(i=0;n[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
        return 0;
}