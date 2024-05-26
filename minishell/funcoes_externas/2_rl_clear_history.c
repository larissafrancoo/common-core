/*
 * Necessário compilação com flags: gcc arquivo.c -lreadline
#include <readline/readline.h>
#include <readline/history.h>

void rl_clear_history(void);
*/

#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input;

	while ((input = readline("")) != NULL)
	{
		if (*input)
			add_history(input);
		printf("Prompt: %s\n", input);
		free(input);
	}

	rl_clear_history();

	if (history_length == 0)
		printf("Histórico limpo.\n");
	else
		printf("Histórico ainda com entradas\n");
	return (0);
}
