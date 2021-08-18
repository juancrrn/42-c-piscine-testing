#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strdup(int number, char *src)
{
	char	*expected;
	char	*obtained;

	printf("# Test %d\n\n", number);

	expected = strdup(src);
	obtained = ft_strdup(src);

	printf("\033[0;33m");
	printf("src: %s\n", src);
	printf("\033[0m");
	printf("Expected return: %s\n", expected);
	printf("Obtained return: %s\n", obtained);

	unsigned int i = 0;
	int any_fails = 0;
	unsigned max_size = strlen(expected);
	if (max_size != strlen(obtained))
	{
		if (strlen(obtained) < max_size)
			max_size = strlen(obtained);
		printf("\033[0;31m");
		printf("Test failure: string lengths differ!\n");
		printf("\033[0m");
		any_fails = 1;
	}
	while (i < max_size) {
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
	heading("C Piscine", "C 07", "00 - ft_strdup");

	test_ft_strdup(1, "abcddddh");

	test_ft_strdup(2, "abcdddd");

	test_ft_strdup(3, "");
}