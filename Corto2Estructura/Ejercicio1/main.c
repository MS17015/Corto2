#include <stdio.h>
#include <math.h>
binarioDecimal(int numero,int i);
int main() {
    int numeroDecimal;
    printf("Ingrese numero binario");
    scanf("%i",&numeroDecimal);
    printf("El numero decimal es : %i",binarioDecimal(numeroDecimal,1));
    return 0;
}
int binarioDecimal(int numero,int i){
    if(numero>0){
        int aux=numero%10;
        return (aux*i)+binarioDecimal(numero/10,i*2);
    }else{
        return numero;
    }
}