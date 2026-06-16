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
        {"Quanto e 7 + 8?", {"a) 13", "b) 15", "c) 16"}, 2},
        {"Quanto e 9 x 6?", {"a) 54", "b) 56", "c) 45"}, 1},
        {"Quanto e 100 - 37?", {"a) 67", "b) 63", "c) 73"}, 2}
    };

    struct alternativas bancoP2[3] = {
        {"Sou par, maior que 4 e menor que 8. Quem sou?", {"a) 5", "b) 6", "c) 7"}, 2},
        {"Quanto mais se tira de mim, maior eu fico. O que sou?", {"a) Um Buraco", "b) Uma Sombra", "c) Uma Montanha"}, 1},
        {"Tenho cidades mas nao casas, montanhas mas nao arvores, agua mas nao peixes. O que sou?", {"a) Um Mapa", "b) Um Deserto", "c) Um Livro"}, 1}
    };

    struct alternativas bancoP3[3] = {
        {"Complete a sequencia: 1, 2, 4, 8, ...?", {"a) 10", "b) 16", "c) 12"}, 2},
        {"Se todo A e B, e todo B e C, entao todo A e...?", {"a) C", "b) nenhum", "c) so as vezes"}, 1},
        {"Qual vem depois: 5, 10, 15, 20, ...?", {"a) 22", "b) 25", "c) 30"}, 2}
    };

    int opcao = 0;

    printf("A escuridao e total. Voce nao lembra como chegou aqui.\n");
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
    int resolvida[3] = {0, 0, 0}; 

    while (jogando == 1){
        printf("\nDigite o numero da porta que deseja entrar:\n");
        printf("1 - Porta dos Numeros\n");
        printf("2 - Porta do Segredo\n");
        printf("3 - Porta do Codigo\n");
        printf("9 - sair\n\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("[Voce entra na Porta dos Numeros]\n");
                if (AbrirPorta(bancoP1) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[0] = 1;
                } else {
                    printf("Errou, porta trancada!\n");
                }
                break;

            case 2:
                printf("[Voce entra na Porta do Segredo]\n");
                if (AbrirPorta(bancoP2) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[1] = 1;
                } else {
                    printf("Errou, porta trancada!\n");
                }
                break;

            case 3:
                printf("[Voce entra na Porta do Codigo]\n");
                if (AbrirPorta(bancoP3) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[2] = 1;
                } else {
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

        if (resolvida[0] == 1 && resolvida[1] == 1 && resolvida[2] == 1) {
            printf("\nAs tres portas se abrem ao mesmo tempo!\n");
            printf("Uma luz dourada toma a sala e o caminho de volta aparece.\n");
            printf("Voce resolveu todos os enigmas e escapou da Outra Dimensao.\n");
            printf("VOCE VENCEU!\n");
            jogando = 0;
        }
    }

    return 0;
}