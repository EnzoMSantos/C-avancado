#include <stdio.h>
#include <string.h>

int main() {
    char palavraSecreta[20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    do {
    char chute;

    printf("Qual letra? ");
    scanf("%c", &chute);

    for(int i = 0; i < strlen(palavraSecreta); i++) {
        if(palavraSecreta[i] == chute) {
            printf("A posicao %d tem essa letra\n", i+1);
        }
    }
} while (!acertou && !enforcou);
        
    
    

    
}