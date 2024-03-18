#include <stdio.h>

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int num) {
    int a = 0, b = 1, temp;

    if (num == a || num == b)
        return 1;

    // Calcula a sequência de Fibonacci até que o número exceda o valor informado
    while (b <= num) {
        if (b == num)
            return 1;
        temp = b;
        b = a + b;
        a = temp;
    }

    return 0;
}

int main() {
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num))
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    else
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);

    return 0;
}
