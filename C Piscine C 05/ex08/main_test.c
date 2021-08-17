#include <stdio.h>
#include <stdlib.h>

int	ft_ten_queens_puzzle();

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_ten_queens_puzzle(int number, int expected)
{
	printf("# Test %d\n\n", number);

	int obtained = ft_ten_queens_puzzle();

	printf("\033[0;33m");
	printf("\n(No input needed)\n");
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
	heading("C Piscine", "C 05", "06 - ft_ten_queens_puzzle");

	test_ft_ten_queens_puzzle(1, 724);

	printf("\033[0;33m");
	printf("No further testing available!\n");
	printf("\033[0m");
}
