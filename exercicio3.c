//3.Implemente uma função que encontre o maior elemento de um array usando ponteiros:
#include <stdio.h>

//TODO: Implemente essa função usando APENAS ponteiros
int encontrar_maior(int *array, int tamanho){
    int maior = array[0];
    int i;

    for (i=0; i < tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }

    return maior;
}

int main(){
    int i;
    int numeros[] = {45, 23, 78, 12, 67, 34, 89, 56};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int maior = encontrar_maior(numeros, tamanho);

    printf("Array: ");
    for(i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }
    printf("\nMaior elemento: %d\n", maior);

    return 0;
}