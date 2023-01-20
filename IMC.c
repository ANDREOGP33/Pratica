#include <stdio.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

 double altura, peso, imc;
 char resp;

 do {

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    printf("Digite o seu peso: ");
    limpar_entrada();
    scanf("%lf", &peso);

    imc = peso / (pow(altura, 2));
    printf("IMC = %lf", imc);
   
    printf("Deseja calcular mais? ");
    limpar_entrada();
    scanf("%c", &resp);

   } while (resp == 's');

 return 0;

}