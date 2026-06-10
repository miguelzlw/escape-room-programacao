#include <stdio.h>

int main(){
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
    while (jogando == 1){
        printf("Digite o numero da porta que deseja entrar: \n");
        printf("1 - Porta dos Números\n");
        printf("2 - Porta do Segredo\n");
        printf("3 - Porta do Código\n");
        printf("9 - sair\n\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("1..\n");
                break;
            case 2:
                printf("2..\n");
                break;
            case 3:
                printf("3..\n");
                break;
            case 9:
                jogando = 0;
                break;
            default:
                printf("opcao invalida\n");
        }
    }

    return 0;
}