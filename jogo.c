#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int random (int max){
    int n = (rand() % max);
    int palpite;
    int count = 0;

   while (palpite != n) {
    printf("\nQual o seu palpite? \n");
    scanf("%d", &palpite);
     count++;

     if (palpite == n){
        printf("\nVocê acertou o número, era: %d!\n", n);
        printf("\nVocê acertou em %d tentativas\n", count);
         return 0;
     }

    if (palpite > n){
        printf("\nO numero e menor!\n");
    }else{
        printf("\nO numero e maior!\n");
    }
    } 
    return 0;
}

int main()
{ 
    srand(time(0));
    int max;

    printf("\n1 - Fácil\n2 - Médio\n3 - Difícil");
    scanf("%d", &max);

    switch(max){
        case 1:
         random(100);
        break;

        case 2: 
         random(250);
        break;

        case 3:
         random(500);
        break;
    }
}