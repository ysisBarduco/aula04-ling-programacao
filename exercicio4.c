//4. Sistema de Notas
#include <stdio.h>

//Variavel global
int i;

// Função para calcular estatísticas de um array de notas
void calcular_estatisticas(float *notas, int quantidade, float *media, float *maior, float *menor) {

// TODO: Implemente esta função
// Calcule média, maior e menor nota usando ponteiros
for (i=0; i < quantidade; i++){
    *media += notas[i]; //soma os valores das notas
}
*media /= quantidade; //Divide a soma das notas pela quantidade de notas

*maior = notas[0]; //Define a primeira nota como a maior
*menor = notas[0]; //Define a primeira nota como a menor
for (i=0; i < quantidade; i++){
    if (notas[i] > *maior){ //Compara a nota da posição i com a nota salva em maior
        *maior = notas[i]; //Define a nota maior
    }
    if (notas[i] < *menor){ //Compara a nota da posição i com a nota salva em menor
        *menor = notas[i]; //Define a nota menor
    } 
}

}

int main() {
float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
int qtd_notas = sizeof(notas) / sizeof(notas[0]);
float media, maior, menor;

calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

printf("=== RELATÓRIO DE NOTAS ===\n");
printf("Notas: ");

for(int i = 0; i < qtd_notas; i++) {
printf("%.1f ", notas[i]);
}

printf("\n");
printf("Média: %.2f\n", media);
printf("Maior nota: %.2f\n", maior);
printf("Menor nota: %.2f\n", menor);

return 0;
}