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
	

}
