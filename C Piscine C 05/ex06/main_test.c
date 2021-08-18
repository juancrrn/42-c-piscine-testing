#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_is_prime(int number, int nb, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_is_prime(nb);

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
	heading("C Piscine", "C 05", "06 - ft_is_prime");

	test_ft_is_prime(1, 0, 0);

	test_ft_is_prime(2, 1, 0);

	test_ft_is_prime(3, 2, 1);

	test_ft_is_prime(4, 3, 1);

	test_ft_is_prime(5, 4, 0);

	test_ft_is_prime(6, 5, 1);

	test_ft_is_prime(7, 7, 1);

	test_ft_is_prime(8, 9, 0);

	test_ft_is_prime(9, 11, 1);

	test_ft_is_prime(10, 23, 1);

	test_ft_is_prime(11, 6, 0);

	test_ft_is_prime(12, 29, 1);

	test_ft_is_prime(13, 7000, 0);

	test_ft_is_prime(14, 21577, 1);

	test_ft_is_prime(15, -3595, 0);

	test_ft_is_prime(16, -12, 0);
}
