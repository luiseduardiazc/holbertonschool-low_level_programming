#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
void print_before_main(void) __attribute__ ((constructor));
/**
*print_before_main - print_before_main
*
*Reurn: Nothing
*/
void print_before_main(void)
{
	char *str_complete = NULL;

	str_complete = malloc(sizeof(char) * 98);
	strcpy(str_complete, "You're beat! and yet, you must allow,\n");
	strcat(str_complete, "I bore my house upon my back!\n");
	printf("%s", str_complete);
}
