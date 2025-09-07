 #include <stdbool.h>
#include <stdio.h>
int main(){
    bool digit_seen[10] ={false};
    int digit;
    long n;
    int i;
    bool newseen[10] = {false} ;
    printf("entrez les nombre: ");
    scanf("%ld",&n);
    while (n>0)
    {
      digit = n % 10 ;
      if (digit_seen[digit]){
            newseen[digit] = true;
      }
     digit_seen[digit] = true ;
      n = n / 10 ;
    }
    printf("des chiffre sont repete.\n");
        for (i= 0; i < 10; i++)
        {
            if(newseen[i])
            printf("%d\t",i);
        }

    return 0;
}
