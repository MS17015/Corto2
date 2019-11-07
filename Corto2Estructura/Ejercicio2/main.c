#include <stdio.h>
int intercambiar(int *puntero1,int *puntero2);
int main() {
    int variable1,variable2;
    printf("Introduzca la variable 1: ");
    scanf("%i",&variable1);
    printf("Introduzca la variable 2: ");
    scanf("%i",&variable2);
    intercambiar(&variable1,&variable2);
    printf("Variable 1 : %i Variable 2 : %i",variable1,variable2);
    return 0;
}
int intercambiar(int *puntero1, int *puntero2) {
    int temporal = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = temporal;
}