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

	test_ft_recursive_power(1, 0, 0, 1);

	test_ft_recursive_power(2, 1, 0, 1);

	test_ft_recursive_power(3, 1, 1, 1);

	test_ft_recursive_power(4, 2, 0, 1);

	test_ft_recursive_power(5, 2, 2, 4);

	test_ft_recursive_power(6, 5, 2, 25);

	test_ft_recursive_power(7, 5, 5, 3125);

	test_ft_recursive_power(8, 2, 32, 0);
}
