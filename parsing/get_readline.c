#include "../includes/alternative_shell.h"

int get_readline(global_data *data) {
	char *line = NULL;

	line = readline("shell> ");
	if (*line)
		add_history(line);
	data->line = malloc(sizeof(strlen(line) + 1));
	data->line = strcpy(data->line, line);
	
	if (data->line == NULL) {
		perror("malloc");
		free(line);
		return (-1);
	}

	free(line);
	return (0);
}