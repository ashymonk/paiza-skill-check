#include <stdio.h>
#include <string.h>

char leetchar_table[][2] =
{
	{ 'A', '4' },
	{ 'E', '3' },
	{ 'G', '6' },
	{ 'I', '1' },
	{ 'O', '0' },
	{ 'S', '5' },
	{ 'Z', '2' },
};

char leetchar(char ch)
{
	for(int i = 0; i < (int)sizeof(leetchar_table); i++)
	{
		if ( ch == leetchar_table[i][0] )
		{
			return leetchar_table[i][1];
		}
	}

	return ch;
}

int str_to_leetstr(char *str)
{
	if( str == NULL)
	{
		return -1;
	}

	for(int i = 0; i < (int)strlen(str); i++)
	{
		str[i] = leetchar( str[i] );
	}

	return 0;
}

int main(void)
{
	char str[256];

	fgets(str, sizeof(str), stdin);

	str_to_leetstr(str);

	printf("%s", str);

	return 0;
}
