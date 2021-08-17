#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strncmp(int number, char *s1, char *s2, unsigned int n)
{
	int	expected;
	int	obtained;

	printf("# Test %d\n\n", number);

	expected = strncmp(s1, s2, n);
	obtained = ft_strncmp(s1, s2, n);

	printf("\033[0;33m");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("n : %d\n", n);
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
	heading("C Piscine", "C 03", "01 - ft_strncmp");

	test_ft_strncmp(1, "abcddddh", "abcdddd", 3);

	test_ft_strncmp(2, "abedddd", "abed", 9);

	test_ft_strncmp(3, "abedddd", "abed", 4);

	test_ft_strncmp(4, "Nada a ver", "Teste de Comparacao", 5);

	test_ft_strncmp(5, "Teste de Comparacao", "Nada a ver", 5);

	test_ft_strncmp(6, "Nada a ver", "Teste", 5);

	test_ft_strncmp(7, "Teste", "Nada a ver", 5);

	test_ft_strncmp(8, "Teste de Comparacao", "Teste", 5);

	test_ft_strncmp(9, "Teste", "Teste de Comparacao", 5);

	test_ft_strncmp(10, "hola", "holaaaaaa", 4);
}
