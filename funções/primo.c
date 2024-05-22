#include <stdio.h>

int verificaPrimo(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (verificaPrimo(num)) {
        printf("verdadeiro\n");
    } else {
        printf("falso");
    }

    return 0;
}
