#include <stdio.h>
#include <string.h>
int main() {
    int i,count=0;
    char word[20];                                           
   fgets(word,20,stdin);
    for(i=0;word[i]!='\0';i++){
        if(word[i]==35||word[i]==36||word[i]==37||word[i]==38||word[i]==64)
            count++;}
           
            
           
    printf("%d",count);
    
    
    return 0;
}