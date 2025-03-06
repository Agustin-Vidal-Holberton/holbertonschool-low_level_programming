#include "main.h"
/**
* _memcpy - Copia un area de memoria
* @dest: Puntero al destino donde se copiaran los bytes
* @src: Puntero al origen desde donde se copiaran los bytes
* @n: Numero de bytes a copiar
* Return: Retorna un puntero al destino(dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /*Variable para recorrer los bytes*/
	/*Copia byte por byte desde src a dest*/
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest); /*Retorna el puntero al destino*/
}
