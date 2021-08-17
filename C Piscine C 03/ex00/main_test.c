#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strcmp(int number, char *s1, char *s2)
{
	int	expected;
	int	obtained;

	printf("# Test %d\n\n", number);

	expected = strcmp(s1, s2);
	obtained = ft_strcmp(s1, s2);

	printf("\033[0;33m");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
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

int main(void)
{
	heading("C Piscine", "C 03", "00 - ft_strcmp");

	test_ft_strcmp(1, "abcddddh", "abcdddd");

	test_ft_strcmp(2, "abcdddd", "abcdddd");

	test_ft_strcmp(3, "abcdddd", "abcd");
}
