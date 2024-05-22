#include <stdio.h>

int somaDigitos(int n) {
    int soma = 0;

    while (n != 0) {
        soma += n % 10; 
        n /= 10; 
    }

    return soma;
}

int main() {
    int n;
    printf("Digite uma sequencia: ");
    scanf("%d", &n);

    int resultado = somaDigitos(n);
    printf("A soma dos dígitos de %d é: %d\n", n, resultado);

    return 0;
}