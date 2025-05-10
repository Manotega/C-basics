#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
	float raio, area, perimetro;
	printf("QUAL O RAIO?\n");
	scanf("%f", &raio);
	
	area = PI * pow(raio,2);
	perimetro = 2 * PI *raio;
	
	printf("Perimetro: %.2f \nRaio: %.2f", perimetro, area);
	return 0;
}