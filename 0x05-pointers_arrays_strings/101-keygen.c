#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: always 0.
 */
int main(void)
{
	char password[84];
	int i = 0, sum = 0, half_dif1 = 0, half_dif2 = 0;

	srand (time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password [i] = '\0';
	if (sum != 2772)
	{
		half_dif1 = (sum - 2772) / 2;
		half_dif2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			half_dif1++;
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half_dif1))
			{
				password[i] -= half_dif1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half_dif2))
			{
				password[i] -= half_dif2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
