#include <stdio.h>
int _atoi(char *s);
/**
*main - Entry point
*This function prints the multiplication of it's two
*arguments it receives
*@argc: number of argument passed to the program
*@argv: one dimensional array of strings passed
*as arguments to the program
*
*Return: 0 on success
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
if (argc > 1 && argc != 2)
{
i = _atoi(argv[1]) * _atoi(argv[2]);
printf("%d\n", i);
}

else
{
printf("Error\n");
return (1);
}

return (0);
}


/**
*_atoi - converts a string to an
*integer
*
*@s:string argument
*Return: converted integer
*/

int _atoi(char *s)
{
int i, sign, num, digit, flag;
sign = 0;
num = 0;
flag = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign++;
}

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - 48; /** '0' ascii value**/
if (sign % 2)
{
digit = -digit;
}
num = num * 10 + digit;
flag = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
}
}

if (flag == 0)
{
return (0);
}
return (num);
}
