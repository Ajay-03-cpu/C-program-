#include<stdio.h>
int main(){
    int no_subject,marks,avg_mark=0,fails=0;
    scanf("%d",&no_subject);
    for (int i=1;i<=no_subject;i++){
        scanf("%d",&marks);
        avg_mark+=marks;
        if(marks<40){
            fails+=1;
        }
    }
    avg_mark/=no_subject;
    printf("Average marks : %d\nFailed Subjects: %d",avg_mark,fails);
    return 0;
}