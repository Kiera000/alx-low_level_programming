#include "main.h"
/**
 * _isuper -prog checks for uppercase character
 * @c: variable text
 * return: always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
