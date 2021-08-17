#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_find_next_prime(int number, int nb, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_find_next_prime(nb);

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
	heading("C Piscine", "C 05", "06 - ft_find_next_prime");

	test_ft_find_next_prime(1, 0, 2);

	test_ft_find_next_prime(2, 1, 2);

	test_ft_find_next_prime(3, 2, 2);

	test_ft_find_next_prime(4, 3, 3);

	test_ft_find_next_prime(5, 4, 5);

	test_ft_find_next_prime(6, 5, 5);

	test_ft_find_next_prime(7, 7, 7);

	test_ft_find_next_prime(8, 9, 11);

	test_ft_find_next_prime(9, 11, 11);

	test_ft_find_next_prime(10, 23, 23);

	test_ft_find_next_prime(11, 6, 7);

	test_ft_find_next_prime(12, 29, 29);

	test_ft_find_next_prime(13, 7000, 7001);

	test_ft_find_next_prime(14, 21576, 21577);

	test_ft_find_next_prime(15, 21577, 21577);
}
