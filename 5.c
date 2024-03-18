#include <stdio.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char temp;

    // Loop para trocar os caracteres de posição
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[100]; // Defina o tamanho máximo da string conforme necessário

    printf("Digite uma string: ");
    scanf("%s", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
