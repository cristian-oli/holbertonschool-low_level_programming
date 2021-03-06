#ifndef _FILE_I_O
#define _FILE_I_O

#include <stddef.h>
#include <stdlib.h>

/* dprintf */
#include <stdio.h>

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* read, close comands */
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file_to_file(const char *filename, char *destiny);

#endif
