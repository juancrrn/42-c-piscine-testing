#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strstr(int number, char *str, char *to_find)
{
	void*	expected;
	void*	obtained;

	printf("# Test %d\n\n", number);

	expected = strstr(str, to_find);
	obtained = ft_strstr(str, to_find);

	printf("\033[0;33m");
	printf("str    : %s\n", str);
	printf("to_find: %s\n", to_find);
	printf("\033[0m");
	printf("Expected return: %p\n", expected);
	printf("Obtained return: %p\n", obtained);
	printf("Read expected: %s\n", expected);
	printf("Read obtained: %s\n", obtained);

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
	heading("C Piscine", "C 03", "04");

	test_ft_strstr(1, "hellolohello", "lohe");

	test_ft_strstr(2, "a b a b a c c c a", "c c a");

	test_ft_strstr(3, "a b a b a c c c a", "c z a");
}
