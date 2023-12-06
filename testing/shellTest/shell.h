#ifndef SHELL_H
/*! \file shell.h */
#define SHELL_H

#define MAX_PATH_LENGTH 1024
#define MAX_ARGUMENTS 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void executeCommand(char *input, char *path);

