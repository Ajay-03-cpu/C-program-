#include <stdio.h>

int main() {
    int i,valid=0;
    char n[20];
    scanf("%s",&n);
    for(i=0;n[i]!='\0';i++){
        if(n[i]>='A'&&n[i]<='Z'){
            printf("Valid");
            valid=1;
            break;
        }
    }
    if(valid==0){
    printf("Invalid");}
        return 0;
}