#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_recursive_factorial(int number, int input, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_recursive_factorial(input);

	printf("\033[0;33m");
	printf("input: %d\n", input);
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
	heading("C Piscine", "C 05", "01 - test_ft_recursive_factorial");

	test_ft_recursive_factorial(1, -1, 0);

	test_ft_recursive_factorial(2, 0, 1);

	test_ft_recursive_factorial(3, 1, 1);

	test_ft_recursive_factorial(4, 2, 2);

	test_ft_recursive_factorial(5, 3, 6);

	test_ft_recursive_factorial(6, 10, 3628800);

	test_ft_recursive_factorial(7, 17, -288522240);
}