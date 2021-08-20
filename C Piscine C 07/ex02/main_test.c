#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_ultimate_range_return(int number, int **range, int min, int max, int expected)
{
	int	obtained;

	printf("# Test %d\n\n", number);

	obtained = ft_ultimate_range(range, min, max);

	printf("\033[0;33m");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("\033[0m");
	printf("Expected return: %d\n", expected);
	printf("Obtained return: %d\n", obtained);

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

void	test_ft_ultimate_range(int number, int **range, int min, int max, int **expected)
{
	printf("# Test %d\n\n", number);

	ft_ultimate_range(range, min, max);

	printf("\033[0;33m");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("\033[0m");

	int i = 0;
	int any_fails = 0;
	while (i < (max - min)) {
		if (range[0][i] != expected[0][i])
		{
			printf("\033[0;31m");
			printf("Test failure: obtained[0][%d] was not expected\n", i);
			printf("\033[0m");
			any_fails = 1;
		}
		i++;
	}

	if (! any_fails)
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

int main(void)
{
	heading("C Piscine", "C 07", "02 - ft_ultimate_range");

	int *residue_cont = { 0 };
	int **residue = & residue_cont;

	test_ft_ultimate_range_return(1, residue, 0, 0, 0);

	test_ft_ultimate_range_return(2, residue, 0, -1, 0);

	test_ft_ultimate_range_return(3, residue, -3, -5, 0);

	int *t_cont = malloc(20 * sizeof(int));

	int t4_exp_cont[] = { -1, 0, 1, 2 };
	int *t4_exp = & t4_exp_cont[0];
	test_ft_ultimate_range(4, & t_cont, -1, 3, & t4_exp);

	int t5_exp_cont[] = { 0, 1, 2 };
	int *t5_exp = & t5_exp_cont[0];

	test_ft_ultimate_range(5, & t_cont, 0, 3, & t5_exp);

	int t6_exp_cont[] = { 2, 3, 4, 5 };
	int *t6_exp = & t6_exp_cont[0];

	test_ft_ultimate_range(6, & t_cont, 2, 6, & t6_exp);

	free(t_cont);
}