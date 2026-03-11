#include <stdio.h>

int main() {
    int i;
    char n[20];
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++){
        
        if(n[i]=='@'){
            break;
        }
        printf("%c",n[i]);
    }
    
        return 0;
}