#include <stdio.h>

int main() {
    int x, n, produto;

    // Recebe os valores de x e n
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula o produto usando operadores bit a bit
    produto = x << n;

    // Imprime o resultado
    printf("O produto de %d por 2 elevado a %d é: %d\n", x, n, produto);

    return 0;
}
