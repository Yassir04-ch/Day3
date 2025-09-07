#include <stdio.h>
#include <ctype.h>

int main()
{
    char msg[50];
    printf("entrez votre message : \n");
    scanf(" %[^\n]",msg);
    for(int i=0;msg[i]!='\0';i++){
        char c =toupper(msg[i]);
        switch (c){
        case 'A': c='4';
        break;
        case 'B': c='8';
        break;
        case 'E': c='3';
        break;
        case 'I': c='1';
        break;
        case 'O': c='0';
        break;
        case 'S': c='5';
        break;
        }
        printf("%c",c);
    }

    return 0;
}
