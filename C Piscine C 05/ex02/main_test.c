#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_iterative_power(int number, int nb, int power, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_iterative_power(nb, power);

	printf("\033[0;33m");
	printf("nb   : %d\n", nb);
	printf("power: %d\n", power);
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
	heading("C Piscine", "C 05", "02 - ft_iterative_power");

	test_ft_iterative_power(1, 0, -1, 0);

	test_ft_iterative_power(2, 0, 0, 1);

	test_ft_iterative_power(3, 1, 0, 1);

	test_ft_iterative_power(4, 1, 1, 1);

	test_ft_iterative_power(5, 2, 0, 1);

	test_ft_iterative_power(6, 2, 2, 4);

	test_ft_iterative_power(7, 5, 2, 25);

	test_ft_iterative_power(8, 5, 5, 3125);

	test_ft_iterative_power(9, 2, 32, 0);
}
