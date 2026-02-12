#include <stdio.h>

int main() {
    char let;
    scanf("%c",&let);
    if(let>=48&&let<=57)
    printf("digit");
    else if(let>=65&&let<=90||let>=97&&let<=122)
    printf("Alphabet");
    else
        printf("Special charecter");
    return 0;
}