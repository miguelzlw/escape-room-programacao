# Escape Room: A Dimensão do Vazio

Um jogo de terminal feito em **C**, no estilo *escape room*. Você acorda preso na Dimensão do Vazio e precisa vencer os enigmas de três portas, ao longo de três fases de dificuldade crescente, para escapar.

> Projeto desenvolvido para a disciplina de Programação do curso de Engenharia de Software (UniCEUB).

## A história

Você desperta numa sala escura, iluminada apenas por uma luz fria sobre um livro antigo. Ao tocá-lo, descobre que foi arrancado do seu mundo e trazido para a **Dimensão do Vazio** — um lugar entre realidades, de onde ninguém jamais saiu.

Três portas seladas por enigmas surgem na escuridão:

- **Porta dos Números** — desafios de matemática
- **Porta do Segredo** — enigmas e charadas
- **Porta do Código** — perguntas de lógica

![Tela inicial do jogo]()
<img width="658" height="424" alt="image" src="https://github.com/user-attachments/assets/2a1f26ac-8aa5-4a60-a56a-ae1d55091bde" />

![O livro revela a história e as portas surgem]
<img width="715" height="523" alt="image" src="https://github.com/user-attachments/assets/344da5b7-b956-4e50-aab0-4b1da5b76217" />


## Como jogar

- O jogo tem **3 fases** de dificuldade crescente.
- Em cada fase, você precisa abrir as **3 portas**. Cada porta sorteia uma pergunta aleatória do seu tema, então cada partida é diferente.
- Você responde digitando 1, 2 ou 3. Acertou, a porta abre; errou, perde uma vida.
- Você começa com **5 vidas**. Se elas acabarem, o Vazio te engole — fim de jogo.

![Respondendo uma porta e acertando] <img width="658" height="424" alt="image" src="https://github.com/user-attachments/assets/b72c48aa-58b7-445f-b614-5493e2672cc4" /> 
<img width="715" height="523" alt="image" src="https://github.com/user-attachments/assets/37ae0f63-a7bf-42f1-8d54-96d48aa7cbdb" />


## As fases

Ao abrir as três portas de uma fase, você avança para a próxima — e as perguntas ficam mais difíceis. Supere as três fases para que o portal de volta finalmente se abra.

![Avançando para a próxima fase] <img width="787" height="465" alt="image" src="https://github.com/user-attachments/assets/358524ca-bc38-4cbc-9dc3-3eb83a285fdd" />
<img width="727" height="835" alt="image" src="https://github.com/user-attachments/assets/107f62a7-82b1-4c11-99f6-bb1b437ced7e" />
<img width="663" height="718" alt="image" src="https://github.com/user-attachments/assets/3358bfe9-18ea-4e19-9b58-f87955c88cdc" />
<img width="732" height="745" alt="image" src="https://github.com/user-attachments/assets/11cc9730-efdd-408c-82c7-16785fc8b902" />

## A vitória

Resolva todos os enigmas das três fases e escape da Dimensão do Vazio.

![Tela de vitória] <img width="1000" height="849" alt="image" src="https://github.com/user-attachments/assets/fe882560-7f06-402c-a5b4-66caf777b909" />


## Conceitos de C utilizados

- `struct` para modelar uma pergunta (enunciado, alternativas e resposta correta)
- Arrays de structs em duas dimensões (`[fase][pergunta]`), funcionando como banco de perguntas organizado por dificuldade
- Função (`AbrirPorta`) para modularizar a lógica das portas e evitar repetição de código
- `rand()` e `srand()` para sortear uma pergunta aleatória a cada partida
- Laços (`while`), estruturas de decisão (`switch`, `if/else`) e controle de estado (vidas, fases e portas resolvidas)
