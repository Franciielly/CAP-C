#include <stdio.h>

int calculaFibonacci(int n) {
    if (n <= 0) {
        return -1;
    } else if (n == 1) {
        return 0; 
    } else if (n == 2) {
        return 1; 
    } else {
        int primeiroTermo = 0, segundoTermo = 1, proximoTermo;
        for (int i = 3; i <= n; i++) {
            proximoTermo = primeiroTermo + segundoTermo;
            primeiroTermo = segundoTermo;
            segundoTermo = proximoTermo;
        }
        return proximoTermo;
    }
}

int main() {
    int n;
    printf("Digite o valor de n para calcular o n-ésimo número na sequência de Fibonacci: ");
    scanf("%d", &n);

    int resultado = calculaFibonacci(n);
    if (resultado == -1) {
        printf("Por favor, insira um número inteiro positivo maior que 0.\n");
    } else {
        printf("O %d-ésimo número na sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}