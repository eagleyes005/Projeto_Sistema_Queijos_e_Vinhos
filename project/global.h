#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#ifndef GLOBAL_H
#define GLOBAL_H


#define MAX_LENGTH 50

typedef struct {
    int lot;
    char production[MAX_LENGTH];
    char type[MAX_LENGTH];
    int amount;
    int day;
    int month;
    int year;
} productStruct;

//Seletor padr�o de queijos ou vinhos
int generalSelector () {
    int subSelector;
    printf("-------------- MENU --------------\n");
    printf("1 - Lotes de Queijos\n");
    printf("2 - Garrafas de Vinhos\n");
    printf("0 - Voltar\n");
    printf("Selecione o que deseja: ");
    scanf("%d", &subSelector); //NOLINT(cert-err34-c) <- remove o aviso do "scanf"
    printf("\n");

    switch (subSelector)
    {
        case 1:
            return 1;

        case 2:
            return 2;

        case 0:
            printf("Voltando...\n");
            sleep(2);
            break;

        default:
            printf("Op��o inv�lida!");
            break;
    }
    return 0;
}

#endif // GLOBAL_H