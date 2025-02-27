#include <stdio.h>
#include<math.h>

int main() {
	float f,c;
	
	printf("Qual a temperatura em F? \n");
	scanf("%f", &f);
	
	c = (f - 32) * 5.0 / 9;
	printf("%.2f", c);
	return 0;
}
