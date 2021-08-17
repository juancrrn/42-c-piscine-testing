#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strlcat(int number, char *dest, char *src, unsigned int size, char *dest_exp)
{
	printf("# Test %d\n\n", number);

	printf("\033[0;33m");
	printf("dest: %s\n", dest);
	printf("src : %s\n", src);
	printf("size: %d\n", size);
	printf("\033[0m");

	int expected = strlcat(dest_exp, src, size);
    int obtained = ft_strlcat(dest, src, size);
	printf("Expected dest: %s\n", dest_exp);
	printf("Obtained dest: %s\n", dest);

	unsigned int i = 0;
	int any_fails = 0;
	unsigned max_size = strlen(dest_exp);
	if (max_size < strlen(dest))
		max_size = strlen(dest);
	while (i < strlen(dest_exp)) {
		if (dest[i] != dest_exp[i])
		{
			printf("Test failure: dest[%d] was not expected\n", i);
			any_fails = 1;
		}
		i++;
	}
	printf("Expected return: %d\n", expected);
	printf("Obtained return: %d\n", obtained);

	if (! any_fails && obtained == expected)
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
	heading("C Piscine", "C 03", "05");

	char test1_src[5] = "abcd\0";
	char test1_dest_expected[10] = "10oST\0    ";
	char test1_dest[10] = "10oST\0    ";
	test_ft_strlcat(1, test1_dest, test1_src, 10, test1_dest_expected);

	char test2_src[5] = "abcd\0";
	char test2_dest_expected[6] = " \0    ";
	char test2_dest[6] = " \0    ";
	test_ft_strlcat(2, test2_dest, test2_src, 6, test2_dest_expected);

	char test3_src[15] = "Concatenando 1\0";
	char test3_dest_expected[50]; test3_dest_expected[0] = 'O'; test3_dest_expected[1] = 'l'; test3_dest_expected[2] = 'a'; test3_dest_expected[3] = '\0';
	char test3_dest[50]; test3_dest[0] = 'O'; test3_dest[1] = 'l'; test3_dest[2] = 'a'; test3_dest[3] = '\0';
	test_ft_strlcat(3, test3_dest, test3_src, 3, test3_dest_expected);
}
