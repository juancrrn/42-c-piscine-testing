#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_recursive_power(int number, int nb, int power, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_recursive_power(nb, power);

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
	heading("C Piscine", "C 05", "03 - ft_recursive_power");

	test_ft_recursive_power(1, 0, -1, 0);

	test_ft_recursive_power(2, -1, 0, 1);

	test_ft_recursive_power(3, -1, -1, 0);

	test_ft_recursive_power(4, -2, 5, -32);

	test_ft_recursive_power(5, 5, -2, 0);

	test_ft_recursive_power(6, 0, 0, 1);

	test_ft_recursive_power(7, 1, 0, 1);

	test_ft_recursive_power(8, 1, 1, 1);

	test_ft_recursive_power(9, 2, 0, 1);

	test_ft_recursive_power(10, 2, 2, 4);

	test_ft_recursive_power(11, 5, 2, 25);

	test_ft_recursive_power(12, 5, 5, 3125);

	test_ft_recursive_power(13, 2, 32, 0);

	test_ft_recursive_power(14, -3, -1, 0);
	test_ft_recursive_power(15, -3, 0, 1);
	test_ft_recursive_power(16, -3, 1, -3);
	test_ft_recursive_power(17, -3, 2, 9);
	test_ft_recursive_power(18, -3, 3, -27);
	test_ft_recursive_power(19, 0, -1, 0);
	test_ft_recursive_power(20, 0, 0, 1);
	test_ft_recursive_power(21, 0, 2, 0);
	test_ft_recursive_power(22, 4, -1, 0);
	test_ft_recursive_power(23, 4, 0, 1);
	test_ft_recursive_power(24, 4, 1, 4);
	test_ft_recursive_power(25, 4, 2, 16);
	test_ft_recursive_power(26, 4, 3, 64);
}
