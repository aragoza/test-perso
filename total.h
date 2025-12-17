#ifndef _TOTAL_H_
#define _TOTAL_H_

typedef int pid_t;

int waitpid(pid_t pid, int *status, int options);
int print_arg(int argc, char **argv);
char *wait_for_line(void);
char **tokenize_a_sentence(char *line, char *delim);
void free_tokens(char **argv);
void execute_command(char **args);

#endif /** _TOTAL_H_ */