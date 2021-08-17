#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_fibonacci(int number, int index, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_fibonacci(index);

	printf("\033[0;33m");
	printf("index: %d\n", index);
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
	heading("C Piscine", "C 05", "04 - ft_fibonacci");

	test_ft_fibonacci(2, 0, 0);

	test_ft_fibonacci(2, 1, 1);

	test_ft_fibonacci(2, 2, 1);

	test_ft_fibonacci(2, 3, 2);

	test_ft_fibonacci(2, 4, 3);

	test_ft_fibonacci(2, 5, 5);

	test_ft_fibonacci(2, 8, 21);

	test_ft_fibonacci(2, 40, 102334155);

	test_ft_fibonacci(2, 47, -1323752223);
}
