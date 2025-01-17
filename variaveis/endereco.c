#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[10] = "Moisés";
    char rua[20] = "Rua das flores, 10";
    char bairro[10] = "Centro";
    char cidade[10] = "Piracicaba";
    char estado[2] = "SP";

    printf("Segue as informações de endereço do %s \n", nome);

    return 0;
}