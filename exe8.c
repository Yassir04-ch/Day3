#include <stdio.h>
#include <string.h>

int main(){
    char phrase[100];
    int j , i ;
    printf("entrez votre phrase . \n");
    scanf(" %[^\n]",phrase);
    for(i=0;i<100;i++){
        for( j=i-1 ;j<0;j--){
                phrase[j]=phrase[j+1];
        }
        printf("%s",phrase[i]);
    }
    return 0;
}
