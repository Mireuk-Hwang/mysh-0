#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char buffer[8096] = "";
	char* parser[1024];
	char* check;
	char* token;
	char key[] = {'\n', '\0'};
	int i=0, flag=0;

	*argc = 0;
	
	for(i = 0; i < 1024; i++)
		parser[i] = malloc(1024);

	if(!(check = strpbrk(command, key)))
		strncpy(buffer, command, strlen(command));
	else{
		if(check == strlen(command)-1)
			strncpy(buffer, command, strlen(command)-1);
		else
			strncpy(buffer, command, strlen(command));
	}

	printf("1%s\n", buffer);

	token = strtok(buffer, " ");

	while(token != NULL && flag != 1){
		
		strcpy(parser[*argc], token);
		printf("strlen: %d\n", strlen(parser[*argc]));
		printf("2%s\n", parser[*argc]);
		(*argc)++;

		token = strtok(NULL, " ");
	}

	*argv = (char**)malloc(sizeof(char**)*(*argc));
	if(*argc == 0){
		(*argv)[0] = (char*)malloc(strlen("")*sizeof(char*));
		strcpy((*argv)[0], "");
		(*argc)++;
	}
	else
		for(i = 0; i < *argc; i++){
		(*argv)[i] = (char*)malloc(strlen(parser[i])*sizeof(char*);
		strcpy((*argv)[i], parser[i]);
		printf("3argv[%d]: %s\n", i, (*argv)[i]);
		}

	printf("4argc: %d\n", *argc);
	
	for(i = 0; i < 1024; i++)
		free(parser[i]);

}
