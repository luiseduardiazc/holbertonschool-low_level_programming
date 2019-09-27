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
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
