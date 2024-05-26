/* Necessário compilação com flags: gcc arquivo.c -lreadline
#include <readline/readline.h>

char *readline(const char *prompt);
*/
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(void)
{
	char *input;

	while ((input = readline("")) != NULL)
	{
		if (*input)
			add_history(input);
		printf("Você digitou: %s\n", input);
		free(input);
	}
	return (0);
}
