#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void	heading(char *cursus, char *project, char *exercise)
{
	printf("\033[0;34m");
	printf("   __  ___\n  /. |(__ \\    42 Testing by Juan Carrión\n (_  _)/ _/    %s %s\n   (_)(____)   %s\n\n", cursus, project, exercise);
	printf("\033[0m");
}

void	test_ft_strncat(int number, char *dest, char *src, char *dest_exp, unsigned int nb)
{
	printf("# Test %d\n\n", number);

	printf("\033[0;33m");
	printf("dest: %s\n", dest);
	printf("src : %s\n", src);
	printf("nb  : %d\n", nb);
	printf("\033[0m");

	strncat(dest_exp, src, nb);
    ft_strncat(dest, src, nb);
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

int main()
{
	heading("C Piscine", "C 03", "03");

	char test1_dest_expected[10] = "10oST\0....";
	char test1_dest[10] = "10oST\0....";
	char test1_src[5] = "abcd\0";
	test_ft_strncat(1, test1_dest, test1_src, test1_dest_expected, 10);

	char test2_dest_expected[10] = "10oST\0....";
	char test2_dest[10] = "10oST\0....";
	char test2_src[5] = "abcd\0";
	test_ft_strncat(2, test2_dest, test2_src, test2_dest_expected, 3);

	char test3_dest_expected[6] = " \0    ";
	char test3_dest[6] = " \0    ";
	char test3_src[5] = "abcd\0";
	test_ft_strncat(3, test3_dest, test3_src, test3_dest_expected, 6);
}
