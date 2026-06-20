#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct alternativas {
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

int main() {
    srand(time(NULL));

    struct alternativas bancoP1[3][3] = {
        { // Fase 1 - facil
            {"Quanto e 7 + 8?", {"a) 13", "b) 15", "c) 16"}, 2},
            {"Quanto e 9 x 6?", {"a) 54", "b) 56", "c) 45"}, 1},
            {"Quanto e 100 - 37?", {"a) 67", "b) 63", "c) 73"}, 2}
        },
        { // Fase 2 - medio
            {"Quanto e 12 x 12?", {"a) 142", "b) 144", "c) 124"}, 2},
            {"Qual o resultado de 5 + 3 x 2?", {"a) 16", "b) 11", "c) 13"}, 2},
            {"Quanto e 25% de 200?", {"a) 25", "b) 50", "c) 75"}, 2}
        },
        { // Fase 3 - dificil
            {"Quanto e 2 elevado a 5?", {"a) 25", "b) 10", "c) 32"}, 3},
            {"Qual o proximo: 2, 6, 12, 20, ...?", {"a) 30", "b) 28", "c) 26"}, 1},
            {"R$80 com 15% de desconto fica em quanto?", {"a) R$68", "b) R$65", "c) R$72"}, 1}
        }
    };

    struct alternativas bancoP2[3][3] = {
        { // Fase 1
            {"Sou par, maior que 4 e menor que 8. Quem sou?", {"a) 5", "b) 6", "c) 7"}, 2},
            {"Quanto mais se tira de mim, maior eu fico. O que sou?", {"a) Um Buraco", "b) Uma Sombra", "c) Uma Montanha"}, 1},
            {"Tenho cidades mas nao casas, montanhas mas nao arvores, agua mas nao peixes. O que sou?", {"a) Um Mapa", "b) Um Deserto", "c) Um Livro"}, 1}
        },
        { // Fase 2
            {"Dois digitos, soma deles 9, multiplo de 5 e menor que 50. Quem sou?", {"a) 45", "b) 90", "c) 18"}, 1},
            {"Tenho teclas mas nao abro portas, tenho espaco mas nao tenho quarto. O que sou?", {"a) Um Teclado", "b) Um Carro", "c) Uma Casa"}, 1},
            {"Estou entre 20 e 40, sou multiplo de 7 e sou par. Quem sou?", {"a) 21", "b) 28", "c) 35"}, 2}
        },
        { // Fase 3
            {"Tenho pescoco mas nao tenho cabeca, e visto um rotulo. O que sou?", {"a) Uma Garrafa", "b) Uma Girafa", "c) Uma Tartaruga"}, 1},
            {"Um numero multiplicado por ele mesmo e somado a 5 da 30. Qual e?", {"a) 5", "b) 6", "c) 25"}, 1},
            {"Sou o numero que, somado ao meu dobro, da 36. Quem sou?", {"a) 12", "b) 18", "c) 24"}, 1}
        }
    };

    struct alternativas bancoP3[3][3] = {
        { // Fase 1
            {"Complete a sequencia: 1, 2, 4, 8, ...?", {"a) 10", "b) 16", "c) 12"}, 2},
            {"Se todo A e B, e todo B e C, entao todo A e...?", {"a) C", "b) nenhum", "c) so as vezes"}, 1},
            {"Qual vem depois: 5, 10, 15, 20, ...?", {"a) 22", "b) 25", "c) 30"}, 2}
        },
        { // Fase 2
            {"Sequencia: 1, 1, 2, 3, 5, 8, ...?", {"a) 11", "b) 13", "c) 12"}, 2},
            {"Se chove, o chao molha. O chao esta seco. Logo...?", {"a) Nao choveu", "b) Choveu", "c) Nao da pra saber"}, 1},
            {"Sequencia de primos: 2, 3, 5, 7, 11, ...?", {"a) 12", "b) 13", "c) 14"}, 2}
        },
        { // Fase 3
            {"Sequencia de quadrados: 1, 4, 9, 16, 25, ...?", {"a) 30", "b) 36", "c) 35"}, 2},
            {"Maria e mais velha que Joao, e Joao mais que Ana. Quem e a mais nova?", {"a) Maria", "b) Joao", "c) Ana"}, 3},
            {"Sequencia: 1, 2, 6, 24, 120, ...?", {"a) 720", "b) 600", "c) 360"}, 1}
        }
    };

    int opcao = 0;

    //  Historia
    printf("Tudo esta escuro. Voce nao sente o chao nem ouve qualquer som.\n");
    printf("Aos poucos, uma unica luz fria se acende sobre voce...\n");
    printf("e revela um livro antigo, de capa gasta, sobre uma mesa de pedra.\n");
    printf("As paginas parecem sussurrar o seu nome.\n\n");
    printf("> Digite 1 para pegar o livro: ");
    scanf("%d", &opcao);

    printf("\nVoce toca o livro e ele se abre sozinho. As letras brilham:\n\n");
    printf("  \"Quem le estas linhas foi arrancado do seu mundo\n");
    printf("   e trazido para a Dimensao do Vazio -- um lugar entre realidades.\n");
    printf("   Aqui o tempo nao passa, mas ninguem jamais conseguiu sair.\n\n");
    printf("   Diante de voce surgirao tres portas seladas por enigmas.\n");
    printf("   Abra as tres para vencer uma fase. A cada fase que avanca,\n");
    printf("   as provas ficam mais crueis. Supere as TRES fases\n");
    printf("   e o portal de volta finalmente se abrira.\n\n");
    printf("   Mas cuidado: a sua mente tem limites. Erre vezes demais\n");
    printf("   e o Vazio te guardara para sempre.\"\n\n");
    printf("O livro se fecha com um baque seco. Na escuridao, tres portas surgem.\n");

    int jogando = 1;
    int fase = 0;                 
    int resolvida[3] = {0, 0, 0}; 
    int vidas = 5;                

    while (jogando == 1) {
        printf("\n========== FASE %d ==========\n", fase + 1);
        printf("Vidas: %d\n", vidas);
        printf("Escolha uma porta:\n");
        printf("1 - Porta dos Numeros\n");
        printf("2 - Porta do Segredo\n");
        printf("3 - Porta do Codigo\n");
        printf("9 - sair\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("[Voce entra na Porta dos Numeros]\n");
                if (AbrirPorta(bancoP1[fase]) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[0] = 1;
                } else {
                    printf("Errou! A porta continua trancada.\n");
                    vidas--;
                }
                break;

            case 2:
                printf("[Voce entra na Porta do Segredo]\n");
                if (AbrirPorta(bancoP2[fase]) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[1] = 1;
                } else {
                    printf("Errou! A porta continua trancada.\n");
                    vidas--;
                }
                break;

            case 3:
                printf("[Voce entra na Porta do Codigo]\n");
                if (AbrirPorta(bancoP3[fase]) == 1) {
                    printf("Acertou! A porta abre.\n");
                    resolvida[2] = 1;
                } else {
                    printf("Errou! A porta continua trancada.\n");
                    vidas--;
                }
                break;

            case 9:
                printf("Voce desistiu e o Vazio te engole. Preso para sempre!\n");
                jogando = 0;
                break;

            default:
                printf("Opcao invalida.\n");
        }

        if (resolvida[0] == 1 && resolvida[1] == 1 && resolvida[2] == 1) {
            if (fase < 2) {
                fase++;
                resolvida[0] = 0;
                resolvida[1] = 0;
                resolvida[2] = 0;
                printf("\nAcertou! Voce avancou para a proxima fase!\n");
                printf("As provas agora ficam mais dificeis...\n");
            } else {
                printf("\nAs tres portas da fase final se abrem ao mesmo tempo!\n");
                printf("Uma luz dourada rasga a escuridao e o portal de volta aparece.\n");
                printf("Voce venceu as tres fases e escapou da Dimensao do Vazio.\n");
                printf("VOCE VENCEU!\n");
                jogando = 0;
            }
        }

        // Game over?
        if (vidas == 0) {
            printf("\nSuas forcas se esgotam e a escuridao avanca sobre voce.\n");
            printf("O Vazio se fecha. Voce ficou preso para sempre.\n");
            printf("GAME OVER.\n");
            jogando = 0;
        }
    }

    return 0;
}
