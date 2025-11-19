//================================================================================
//
//PRATICA:  Estruturas de Dados -  Nível Novato: Cadastro Inicial dos Territórios
//
//Objetivo: Implementar o cadastro de territórios, cor do exército e quantidade de tropas.
//  
//================================================================================

#include <stdio.h>
#include <string.h>

// --- Constantes Estruturas ---
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    //--- Função Principal (main) ---
    struct Territorio territorios[5];

    // --- Cadastro dos territorios ---
    for (int i = 0; i < 5; i++) {
        printf("--------------------------------------------------------\n");
        printf("Vamos cadstrar os 5 territorios iniciais do nosso mundo.\n");
        printf("--------------------------------------------------------\n"); 
        printf("\n--- Cadastrando Territorio %d ---\n", i + 1);

        //--- Cadastro do nome ---
        printf("Nome do territorio: ");
        scanf("%29s", territorios[i].nome);

        // --- Cadastro da cor ---
        printf("Cor do exercito: ");
        scanf("%9s", territorios[i].cor);

        // --- Cadastro do numero de tropas ---
        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // --- Listagem das tropas cadastradas ---
    printf("\nCadastro inicial concluido com sucesso!\n");
    printf("\n===================================\n");
    printf("    MAPA DO MUNDO - ESTADO ATUAL    ");
    printf("\n===================================\n");
        for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome do Territorio: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Numero de Tropas: %d\n", territorios[i].tropas);
    }

    return 0; // Fim do programa.
}