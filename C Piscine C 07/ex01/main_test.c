#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_range_return(int number, int min, int max, int *expected)
{
	int	*obtained;

	printf("# Test %d\n\n", number);

	obtained = ft_range(min, max);

	printf("\033[0;33m");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("\033[0m");
	printf("Expected return: %p\n", expected);
	printf("Obtained return: %p\n", obtained);

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

void	test_ft_range(int number, int min, int max, int *expected)
{
	int	*obtained;

	printf("# Test %d\n\n", number);

	obtained = ft_range(min, max);

	printf("\033[0;33m");
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("\033[0m");

	int i = 0;
	int any_fails = 0;
	while (i < (max - min)) {
		if (obtained[i] != expected[i])
		{
			printf("\033[0;31m");
			printf("Test failure: obtained[%d] was not expected\n", i);
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
	heading("C Piscine", "C 07", "01 - ft_range");

	test_ft_range_return(1, 0, 0, 0);

	test_ft_range_return(2, 0, -1, 0);

	test_ft_range_return(3, -3, -5, 0);

	int t4_exp[] = { -1, 0, 1, 2 };

	test_ft_range(4, -1, 3, t4_exp);

	int t5_exp[] = { 0, 1, 2 };

	test_ft_range(5, 0, 3, t5_exp);

	int t6_exp[] = { 2, 3, 4, 5 };

	test_ft_range(6, 2, 6, t6_exp);
}