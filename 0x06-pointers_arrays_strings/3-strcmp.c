#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2 string 2
 * Return: 0 if equal,positive if s1 is greater and negative if s2 is greater
 */
int _strcmp(char *s1, char *s2){
	int i = 0;
	int Result;
	
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	Result = s1[i] - s2[i];
	return (Result);
}
