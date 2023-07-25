#include <stdio.h>
#include <stdlib.h>

/* Function to perform rot13 encryption */
void rot13_encrypt(char *str)

{
	char c;

	while (*str)
	{
		c = *str;
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		*str += 13;
	} else if
		((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
	*str -= 13;
	}
	str++;
	}


	int main(void);
	char input[100];

	printf("Enter a string: ");
	fgets(input, sizeof(input), stdin);

	/*Remove the newline character from the input */
	char *newline = strchr(input, '\n');

	if (newline)
	*newline = '\0';

	/* Perform rot13 encryption */
	rot13_encrypt(input);

	/* Print the encrypted string */
	printf("Rot13'ed string: %s\n", input);
	return (0);
	}
