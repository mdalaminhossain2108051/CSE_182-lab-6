#include<stdio.h>

int main()
{
    //pattern;
    int i,j,n,p;
    printf("enter the patternnumber : ");
    scanf("%d",&n);

    //new
    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
