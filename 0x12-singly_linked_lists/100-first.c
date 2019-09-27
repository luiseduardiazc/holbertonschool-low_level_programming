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

	str_complete =  calloc(98, sizeof(char));
	strcat(str_complete, "You're beat! and yet, you must allow,\n");
	write(1, str_complete, 68);
	free(str_complete);
}
