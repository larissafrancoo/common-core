#include <stdio.h>
#include <stdarg.h>

struct produto_pedido
{
	char *marca;
	int quantidade;
	float preço_unidade;
};

int main(void)
{
	struct produto_pedido p1;
	p1.marca = "dragoco";
	p1.quantidade = 50;
	p1.preço_unidade = 5.20;

	printf("Marca     : %s \n", p1.marca);
	printf("Quantidade: %d \n", p1.quantidade);
	printf("Unidade   : %.2f \n", p1.preço_unidade);
	return (0);
}
