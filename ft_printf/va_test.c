#include <stdio.h>
#include <stdarg.h>

void print_arguments(int numero_de_argumentos, ...)
{
	va_list args;
	va_start(args, numero_de_argumentos);
	
	int i;
	
	i = -1;
	while (++i < numero_de_argumentos)
	{
		if (i > 0)
			printf(", ");

		// Use va_arg para acessar cada argumento
		int int_arg = va_arg(args, int);
		printf("%d", int_arg);
	}
	
	va_end(args);
	printf("\n");
}

int main(void)
{
	// Chamada da função com diferentes tipos de argumentos
	print_arguments(3, 10, 20, 30);
	print_arguments(4, 1, 2, 3, 4);
	print_arguments(2, 5, 6);
	
	int ret = printf("123\n\n");
	printf("Retorno de printf: %d \n", ret);
	
	return 0;
}
