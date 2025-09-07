#include <stdio.h>

int main(void){
    int a[]={0};
    int i , N;
    N = (int)(sizeof(a)/sizeof(a[0]));
    printf("entrez %d nombres : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Dans l'ordre inverse : ");
    for(i =N-1;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");

    return 0;
}
