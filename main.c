#include <stdio.h>
#include <stdlib.h>

void func1(int *);

int main(int argc, char *argv[]) {
	
	int K = 5;
	printf("Em main() - Endereco de K = %p\n", &K);
	printf("Em main() - Valor de K = %d\n", K);
	
	func1(&K); // referencia
	
	printf("apos a chamada da funcao \n");
	printf("Em main() - Endereco de K = %p\n", &K);
	printf("Em main() - Valor de K = %d\n", K);
	
	return 0;
}

void func1(int *K) {
	*K = *K + 2;
	printf("Em func1() - Endereco de K = %p\n", K);  // mostra endereco de memoria
	printf("Em func1() - Valor de K = %d\n", *K); // mostra valor
}