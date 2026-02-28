 #include <stdio.h>

int main() {
  int n,i,j;
  char let;
  scanf("%d",&n);
  let=64+n;
  for (i=1;i<=n;i++){
      for(j=0;j<i;j++){
          printf("%c ",let-j);
      }
      
      printf("\n");
  }

    return 0;
}