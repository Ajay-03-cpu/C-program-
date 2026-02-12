#include <stdio.h>

int main() {
    char Month;
    scanf("%c",&Month);
    switch (Month){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'U':
        case 'u':printf("Vowel");break;
        default : printf("Comsonent");
        
    }
    

    return 0;
}