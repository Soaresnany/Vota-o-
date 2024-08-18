#include <stdio.h>

int main() {
    int votos[3] = {0, 0, 0};
    int numVotantes, opcao, i, maiorVoto, menorVoto;
    int candidatoMaiorVoto, candidatoMenorVoto;

    printf("Programa de Votacao\n");
    printf("Existem 3 candidatos: 1, 2 e 3.\n");


    printf("Quantas pessoas vao votar? ");
    scanf("%d", &numVotantes);


    for (i = 0; i < numVotantes; i++) {
        printf("\nVoto %d (1, 2, 3): ", i + 1);
        scanf("%d", &opcao);


        if (opcao >= 1 && opcao <= 3) {
            votos[opcao - 1]++;
        } else {
            printf("Opção invalida. Tente novamente.\n");
            i--;
        }
    }

    maiorVoto = votos[0];
    menorVoto = votos[0];
    candidatoMaiorVoto = 1;
    candidatoMenorVoto = 1;


    for (i = 1; i < 3; i++) {
        if (votos[i] > maiorVoto) {
            maiorVoto = votos[i];
            candidatoMaiorVoto = i + 1;
        }
        if (votos[i] < menorVoto) {
            menorVoto = votos[i];
            candidatoMenorVoto = i + 1;
        }
    }


    printf("\nResultados:\n");
    printf("Candidato com maior numero de votos: Candidato %d com %d votos.\n", candidatoMaiorVoto, maiorVoto);
    printf("Candidato com menor numero de votos: Candidato %d com %d votos.\n", candidatoMenorVoto, menorVoto);

    return 0;
}
