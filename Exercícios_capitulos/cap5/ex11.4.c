#include <stdio.h>

int digito(char ch)
{
	if( (ch >= 'a') && (ch <= 'z') )
		return 1;

	return 0;
}

int main()
{
	char ch, dig;

	printf("\nDigite um caractere: ");
	scanf("%c", &ch);

	dig = digito(ch);

	if(dig)
		printf("\n%c é uma letra minúscula.\n", ch);
	else
		printf("\n%c não é uma letra minúscula.\n", ch);
}
