#include <stdio.h>

int main(void) {
      // Variáveis para armazenar a idade em anos, meses e dias
    int anos, meses, dias;

    // Passo 1: Ler a idade em anos, meses e dias
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Passo 2: Calcular a idade em dias
    int idadeEmDias = anos * 365 + meses * 30 + dias;

    // Passo 3: Escrever a idade em dias
    printf("A idade em dias eh: %d\n", idadeEmDias);

    return 0;
}