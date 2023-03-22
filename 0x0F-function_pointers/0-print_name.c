#include "function_pointers.h"

/**
 *print_name - function that call a function that prints a name
 *@name: name to be printed
 *@f: pointer to the function
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}