#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct alternativas{
    char enunciado[200];
    char perguntas[3][100];
    int correta;
};

int AbrirPorta(struct alternativas banco[]) {
    int sorteada = rand() % 3;
    int resposta;

    printf("%s\n", banco[sorteada].enunciado);
    printf("%s\n", banco[sorteada].perguntas[0]);
    printf("%s\n", banco[sorteada].perguntas[1]);
    printf("%s\n", banco[sorteada].perguntas[2]);

    printf("Sua resposta (1, 2 ou 3): ");
    scanf("%d", &resposta);


    if (resposta == banco[sorteada].correta) {
        return 1;
    } else {
        return 0;
    }
}


int main(){
    srand(time(NULL));
    struct alternativas bancoP1[3] = {
    {"Quanto e 7 + 8?", {"a) 13", "b) 15", "c) 16"},2},
    {"Quanto e 9 x 6?", {"a) 54", "b) 56", "c) 45"},1},
    {"Quanto e 100 - 37?", {"a) 67", "b) 63", "c) 73"},2}
    };

    struct alternativas bancoP2[3] = {
    {"Sou par, maior que 4 e menor que 8. Quem sou?", {"a) 5", "b) 6", "c) 7"},2},
    {"Quanto mais se tira de mim, maior eu fico. O que sou?", {"a) Um Buraco", "b) Uma Sombra", "c) Uma Montanha"},1},
    {"Tenho cidades mas não casas, montanhas mas não árvores, água mas não peixes. O que sou?", {"a) Um Mapa", "b) Um Deserto", "c) Um Livro"},1}
    };

    struct alternativas bancoP3[3] = {
    {"Complete a sequência: 1, 2, 4, 8, ...? ", {"a) 10", "b) 16", "c) 12"},2},
    {"Se todo A é B, e todo B é C, então todo A é...? ", {"a) C", "b) nenhum", "c) so as vezes"},1},
    {"Qual vem depois: 5, 10, 15, 20, ...?", {"a) 22", "b) 25", "c) 30"},2}
    };
    int opcao = 0;

    printf("A escuridão e total. Você nao lembra como chegou aqui.\n");
    printf("Aos poucos, uma unica luz se acende -- e ilumina so voce...\n");
    printf("e um livro velho sobre uma mesa de pedra.\n\n");
    printf("> Digite 1 para pegar o livro: ");

    scanf("%d", &opcao);

    // livro
    printf("\nVoce abre o livro. As paginas brilham:\n\n");
    printf("  \"Voce foi puxado para a Outra Dimensao.\n");
    printf("   Tres portas vao surgir a sua frente, cada uma com um enigma.\n");
    printf("   Resolva os tres e o caminho de volta se abre.\n");
    printf("   Falhe, e ficara preso aqui para sempre.\"\n\n");
    printf("O livro se fecha sozinho. Tres portas surgem na parede.\n");

    int jogando = 1;
    int resposta;
    int RespostaCorreta;
    
    while (jogando == 1){
        printf("Digite o numero da porta que deseja entrar: \n");
        printf("1 - Porta dos Números\n");
        printf("2 - Porta do Segredo\n");
        printf("3 - Porta do Código\n");
        printf("9 - sair\n\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("[Voce entra na Porta dos Numeros]\n");
            if (AbrirPorta(bancoP1) == 1) {
                printf("Acertou! A porta abre.\n");
            }
            else {
                printf("Errou, porta trancada!\n");
            }
            break;
            
            case 2:
                printf("[Voce entra na Porta do Segredo]\n");
            if (AbrirPorta(bancoP2) == 1) {
                printf("Acertou! A porta abre.\n");
            }
            else {
                printf("Errou, porta trancada!\n");
            }
            break;
            
            case 3:
                printf("[Voce entra na Porta do Codigo]\n");
            if (AbrirPorta(bancoP3) == 1) {
                printf("Acertou! A porta abre.\n");
            }
            else {
                printf("Errou, porta trancada!\n");
            }
            break;
            case 9:
            printf("Voce desistiu e ficou preso para sempre!\n");
                jogando = 0;
                break;
            default:
                printf("opcao invalida\n");
        }
    
    }
    
    return 0;
}