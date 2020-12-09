#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr_non_printable(char *str);
//void	*ft_print_memory(void *addr, unsigned int size);

int testex00(void);
int testex01(void);
int testex02(void);
int testex03(void);
int testex04(void);
int testex05(void);
int testex06(void);
int testex07(void);
int testex08(void);
int testex09(void);
int testex10(void);
int testex11(void);

int		main(void)
{
	testex00();
	testex01();
	testex02();
	testex03();
	testex04();
	testex05();
	testex06();
	testex07();
	testex08();
	testex09();
	testex10();
	testex11();
}



//ex00##

int testex00(void)
{
    char *dest, *src;
    dest = NULL;
    src = "A copy of a copy of a copy";
    int i = 0;
    while(src[i] != '\0')
    i++;
    dest = malloc(sizeof(*src) * i);
    //ft_strcpy(dest, src);
	printf("Start of test ex00:\n\n");
    printf("%s\n", ft_strcpy(dest, src));
	return (0);
}

//ex01##

int testex01(void)
{
	printf("Start of test ex01:\n\n");
    char dest[10] = "dgahsjdiy";
	char src[8] = "A copy!";
	char de2[10] = "dgahsjdiy";
	char src2[8] = "A copy!";

	int n;

	n = 10;
    ft_strncpy(dest, src, n);
    printf("%s\n", dest);
	printf("\n");
	strncpy(de2, src2, n);
	printf("%s\n", de2);
	printf("\n");
	return (0);
}

//ex02

int		testex02(void)
{
		printf("Start of test ex02:\n\n");
	char *str;

	str = "itsdimmy";
	ft_str_is_alpha(str);
	if (ft_str_is_alpha(str) == 1)
		printf("It's alpha!\n");
	else
		printf("It's naaawt alpha!\n");
	return (0);
}

int		testex03(void)
{
		printf("Start of test ex03:\n\n");
	char *str;

	str = "9";
	ft_str_is_numeric(str);
	if (ft_str_is_numeric(str) == 1)
		printf("It's numeric!\n");
	else
		printf("It's naaawt numeric!\n");
	return (0);
}

int		testex04(void)
{
		printf("Start of test ex04:\n\n");
	char *str;

	str = "a";
	ft_str_is_lowercase(str);
	if(ft_str_is_lowercase(str) == 1)
		printf("It's lowercase\n");
	else
		printf("It's not lowercase\n");
	return (0);
}

int		testex05(void)
{
		printf("Start of test ex05:\n\n");
	char *str;

	str = "A";
	ft_str_is_uppercase(str);
	if(ft_str_is_uppercase(str) == 1)
		printf("It's uppercase\n");
	else
		printf("It's not uppercase\n");
	return (0);
}

int		testex06(void)
{
		printf("Start of test ex06:\n\n");

	char *str;

	str = "Delete";
	ft_str_is_printable(str);
	if(ft_str_is_printable(str) == 1)
		printf("It's printable\n");
	else
		printf("It's naaaawt printable!\n");
	return (0);
}

int		testex07(void)
{
		printf("Start of test ex07:\n\n");
	char str[] = "za@#eS&t*Za!";
	ft_strupcase(str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}

int		testex08(void)
{
		printf("Start of test ex08:\n\n");

	char str[] = "ZA@#eS&t*AZ!";
	ft_strlowcase(str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}

int		testex09(void)
{
		printf("Start of test ex09:\n\n");
	char str[] = "aaaaa+Aaaaa61:szk>(}`[2@6k-:>.>+w?47g,v^9q}*6a_";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}

int testex10(void)
{
	printf("Start of test ex10:\n\n");
    char dest[10] = "dgahsjdiy";
	char src[8] = "A copy!";
	char de2[10] = "dgahsjdiy";
	char src2[8] = "A copy!";

	int n;

	n = 4;
    ft_strlcpy(dest, src, n);
    printf("%s\n", dest);
	printf("return user: %i\n\n", ft_strlcpy(dest, src, n));
	strlcpy(de2, src2, n);
	printf("%s\n", de2);
	printf("return function: %lu\n\n", strlcpy(de2, src2, n));
	return (0);
}

int testex11(void)
{
	printf("Start of test ex11:\n\n");
	//char test[] = "Coucovas b\ti\ne\v\f\ri ?";
	char test[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test);
	printf("\n");
	return (0);
}

