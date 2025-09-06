//5. Inversão de string
#include <stdio.h>
#include <string.h>

//Função para inverter uma string usando ponteiros
void inverter_string(char *str) {
    //TODO: Implemente usando dois ponteiros, um no inicio e outro no fim da string
    char *str_invertido;
    char temp;
    int i, j;
    int tamanho = strlen(*str);

    for(i=0; i < tamanho; i++){
        j = i + 1;
        str[i] = temp;
        

    }


}

int main(){
    char texto[] = "PONTEIROS";

    printf("String original: %s\n", texto);
    inverter_string(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}