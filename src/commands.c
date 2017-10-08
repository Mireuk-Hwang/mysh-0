#include <string.h>
#include <unisted.h>
#include <stdio.h>
#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  chdir(argv[1]);
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  char buf[2048];
  getcwd(buf, 2048);
  printf("%s\n", buf);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
 // TODO: Fill it!
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
 // TODO: Fill it!
  return 1;
}
