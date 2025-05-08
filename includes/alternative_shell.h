#ifndef ALTERNATIVE_SHELL_H
# define ALTERNATIVE_SHELL_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <fcntl.h>

# define SPE_CHAR ";&(){}!#*?|\\<>\"\'"
# define ERROR_CODE "$?" // $! $$
const char* redirections[] = { ">", "<", ">>", "<<", "2>", "&>", NULL };
//don't forget to check the quotes /!/


typedef struct global_data {
	char *line;
	char **tokens;
} global_data;

typedef struct spe_char {
	
} spe_char;

typedef struct signal {

} signal;

/* Includes */
void init_data(global_data *data);

/*Parsing*/
int get_readline(global_data *data);

#endif // ALTERNATIVE_SHELL_H