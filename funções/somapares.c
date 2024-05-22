#include <stdio.h>

int somaPares(int n) {
    int soma = 0;

    for (int i = 2; i <= n; i += 2) {
        soma += i; 
    }

    return soma;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    int resultado = somaPares(n);
    printf("A soma dos números pares de 1 a %d é: %d\n", n, resultado);

    return 0;
}
