#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char pw[12];
	char guess[256];

	strcpy(pw, "Password123");
	strcpy(guess, "0");

	while (strcmp(guess, pw) != 0)
	{
		printf("What is your password?\n");
		scanf("%s", guess);
		if (strcmp(guess, pw) != 0)
			printf("Wrong password.\n");
	}

	printf("You are l33t h4xx0r. The commit has been undone!\n");

	return 0;
}
