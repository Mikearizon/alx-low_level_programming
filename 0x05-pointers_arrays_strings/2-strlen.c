#include "main.h"

/**
*_Strlen - returns the length of a string
*@s: string
*Return: returns length as integer;
*/

int_strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;

return (len);
}
