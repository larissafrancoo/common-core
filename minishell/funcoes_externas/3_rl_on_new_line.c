/* Necessário compilação com flags: gcc arquivo.c -lreadline
#include <radline/readline.h>

void rl_on_new_line(void);
*/

#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input;

	input = readline("Comand:");
	if (input)
	{
		add_history(input);

		printf("\nRealizando uma operação...\n");

		rl_on_new_line();

		rl_replace_line("New:", 0);
		rl_redisplay();

		free(input);
	}
	return (0);
}
