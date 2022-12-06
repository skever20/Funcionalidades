#include <stdio.h>
int main(){
    float n1,n2,media;
    printf("Digite a Primeira Nota:\n");
    scanf("%f",&n1);
    printf("Digite a Segunda Nota:\n");
    scanf("%f",&n2);

    media = (n1 + n2) /2;

    printf("A Média Obtida na Matéria foi: %f\n", media);
}
