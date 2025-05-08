#include "../includes/alternative_shell.h"

int check_char(char **tokens){
	int i = 0;

	while (tokens[i] != NULL) {
		
	}
}

int	create_token(global_data *data) {
	char *token;
	int i = 0;

	if (data->line == NULL) {
		return (-1);
	}
	token = strtok(data->line, " ");
	while (token != NULL) {
		data->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (data->tokens[i] == NULL) {
			perror("malloc");
			return (-1);
		}
		strcpy(data->tokens[i], token);
		token = strtok(NULL, " ");
		i++;
	}
	data->tokens[i] = NULL;
	check_char(data->tokens);
	return (0);
}