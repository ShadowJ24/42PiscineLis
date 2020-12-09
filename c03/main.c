#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int testex00(void);
int testex01(void);
int testex02(void);
int	testex03(void);
int	testex04(void);

int		main(void)
{
	testex00();
	testex01();
	testex02();
	testex03();
	testex04();
}

int testex00(void)
{
	printf("-----EX00: ft_strcmp-----\n\n");
	char *s1 = "abcde";
	char *s2 = "ABCDE";
	char *s3 = "abCdE";
	char *s4 = "3456";
	char *s5 = "abc";
	char *s6 = "abcde";
	//char *s7 = "34";

	printf("1 should be > 0: %i\n", ft_strcmp(s1, s2));
	printf("2 should be > 0: %i\n", ft_strcmp(s1, s3));
	printf("3 should be < 0: %i\n", ft_strcmp(s5, s4));
	printf("4 should be < 0: %i\n", ft_strcmp(s4, s3));
	printf("user 5: %i\n", ft_strcmp(s5, s1));
	printf("user 6: %i\n", ft_strcmp(s1, s6));
	printf("strcmp test1: %i\n", strcmp(s1, s2));
	printf("strcmp test2: %i\n", strcmp(s1, s3));
	printf("strcmp test3: %i\n", strcmp(s5, s4));
	printf("strcmp test4: %i\n", strcmp(s4, s3));
	printf("strcmp test5: %i\n", strcmp(s5, s1));
	printf("strcmp test6: %i\n", strcmp(s1, s6));
	return 0;
}

int testex01(void)
{
	printf("-----EX01: ft_strncmp-----\n\n");
	char *s1 = "abcde";
	char *s2 = "ABCDE";
	char *s3 = "abCdE";
	char *s4 = "3456";
	char *s5 = "abc";
	char *s6 = "abcde";
	char *s7 = "";
	//char s6[5] = "abcde";
	int n = 4;

	printf("1 should be positive: %i\n", ft_strncmp(s1, s2, n));
	printf("2 should be 0: %i\n", ft_strncmp(s1, s3, n));
	printf("3 should be positive: %i\n", ft_strncmp(s5, s4, n));
	printf("4 should be negative: %i\n", ft_strncmp(s4, s3, n));
	printf("5 should be 0: %i\n", ft_strncmp(s5, s7, n));
	printf("user6: %i\n", ft_strncmp(s1, s6, n));
	printf("strcmp test1: %i\n", strncmp(s1, s2, n));
	printf("strcmp test2: %i\n", strncmp(s1, s3, n));
	printf("strcmp test3: %i\n", strncmp(s5, s4, n));
	printf("strcmp test4: %i\n", strncmp(s4, s3, n));
	printf("strcmp test5: %i\n", strncmp(s5, s7, n));
	printf("strcmp test6: %i\n", strncmp(s1, s6, n));
	return 0;
}

int testex02(void)
{
	printf("-----EX02: ft_strcat-----\n\n");
	char src[50] = "This is source";
	char dest[50] = "This is destination";
	char src1[50] = "This is source";
	char dest1[50] = "This is destination";
	printf("This is mine: %s\n\n", ft_strcat(dest, src));
	printf("This is the original: %s\n\n", strcat(dest1, src1));
	return 0;
}

int testex03(void)
{
	printf("-----EX03: ft_strncat-----\n\n");
	char src[50] = "This is source";
	char dest[50] = "This is destination";
	char src1[50] = "This is source";
	char dest1[50] = "This is destination";
	int nb = 6;
	printf("This is mine: %s\n\n", ft_strncat(dest, src, nb));
	printf("This is the original: %s\n\n", strncat(dest1, src1, nb));
	return 0;
}

int testex04(void)
{
	printf("-----EX04: ft_strstr-----\n\n");
	char src[50] = "For This I am Looking For";
	char dest[50] = "This";
	printf("This is mine: %s\n\n", ft_strstr(src, dest));
	printf("This is the original: %s\n\n", strstr(src, dest));
	return 0;
}