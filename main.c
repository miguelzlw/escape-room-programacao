#include <stdio.h>

int main(){
    int opcao;

    printf("A escuridão e total. Você nao lembra como chegou aqui.\n");
    printf("Aos poucos, uma unica luz se acende -- e ilumina so voce...\n");
    printf("e um livro velho sobre uma mesa de pedra.\n\n");
    printf("> Digite 1 para pegar o livro: ");
    
    scanf("%d", &opcao);


    // livrvro//
    printf("\nVoce abre o livro. As paginas brilham:\n\n");
    printf("  \"Voce foi puxado para a Outra Dimensao.\n");
    printf("   Tres portas vao surgir a sua frente, cada uma com um enigma.\n");
    printf("   Resolva os tres e o caminho de volta se abre.\n");
    printf("   Falhe, e ficara preso aqui para sempre.\"\n\n");
    printf("O livro se fecha sozinho. Tres portas surgem na parede.\n");

    return 0;
}