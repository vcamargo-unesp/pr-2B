#include <stdio.h>

int main(){
    int n = 0, i;
    printf("Quantos alunos tem? ");
    
    scanf("%d", &n);
    float notas[n];
    for(i = 0; i < n; i++){
        printf("Nota aluno %d: ", (i+1));
        scanf("%f", &notas[i]);
    }
    float media = 0;
    for(i = 0; i < n; i++)
        media += notas[i];
    media /= n;

    printf("Media: %.2f", media);
    return 0;
}
