#include <stdio.h>
#include <stdbool.h>

int main()
{
    int digit_seen[10]={0};
    int digit;
    long n;

    printf("entrez un nombre : ");
    scanf("%ld",&n);

 while(n > 0){
    digit = n%10;
    digit_seen[digit]++;
    n /= 10 ;
 }

  for(int i=0;i<10;i++){
    printf("%d\t",i);
  }
 printf("\n");
 for(int i=0;i<10;i++){
    printf("%d\t",digit_seen[i]);

 }


  return 0;
}
