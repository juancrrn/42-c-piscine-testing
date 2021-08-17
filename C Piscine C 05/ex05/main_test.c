#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_sqrt(int number, int nb, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_sqrt(nb);

	printf("\033[0;33m");
	printf("nb: %d\n", nb);
	printf("\033[0m");
	printf("Expected output: %d\n", expected);
	printf("Obtained output: %d\n", obtained);

	if (obtained == expected)
	{
		printf("\033[0;32m");
		printf("Test OK\n\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("Test failed\n\n");
		printf("\033[0m");
	}
}

int main()
{
	heading("C Piscine", "C 05", "05 - ft_sqrt");

	test_ft_sqrt(1, 0, 0);

	test_ft_sqrt(2, 1, 1);

	test_ft_sqrt(3, 2, 0);

	test_ft_sqrt(4, 3, 0);

	test_ft_sqrt(5, 4, 2);

	test_ft_sqrt(6, 99980001, 9999);
}
