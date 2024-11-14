#include <stdio.h>
#include <locale.h>
#include <math.h>

/**
 * 2. Crie uma função para calcular a área de figuras 
 * geométricas, considere círculo e quadrado.
 * Círculo PI * raio²
 * Quadrado L x L
*/

float calcula_area_figuras(int tipo, float medida)
{
    if (tipo == 1)
    {
        return M_PI * (medida * medida);
    }
    else if (tipo == 2)
    {
        return medida * medida;
    }
    
}

int main()
{
    setlocale(LC_ALL, "Portuguse");

    int tipoGeometria = 0; // 1 circulo, 2 quadrado
    float medida = 0;

    printf("--Calculadora de áreas para geometrias--\n");
    
    printf("Digite 1 para círculo e 2 para quadrado: ");
    scanf("%d", &tipoGeometria);

    if (tipoGeometria == 1) 
    {
        printf("Qual o raio do círculo? ");
        scanf("%f", &medida);        
    }
    else if (tipoGeometria == 2)
    {
        printf("Qual o medida do lado? ");
        scanf("%f", &medida);
    }
    
    float resultado = calcula_area_figuras(tipoGeometria, medida);

    printf("A área da figura é %.2f \n", resultado);

}