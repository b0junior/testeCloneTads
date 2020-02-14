#include <stdlib.h>
#include <stdio.h>

int main(){
	int inp = 0;
	printf("Insira um número: ");
	scanf("%i", &inp);

	if(inp%2 == 0)
		printf("O número inserido é par.\n");
	else
		printf("O número inserido é impar.\n");
			
    return 0;
}
