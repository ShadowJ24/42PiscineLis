#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int test0();
int test2();
int div_mod();
int ultimate_div_mod();
int putstr();
int strln();
int rev_int();
int sort();

int main()
{
	test0();
	test2();
	div_mod();
	ultimate_div_mod();
	putstr();
	strln();
	rev_int();
	sort();
}

int		test0()
{
	int nbr = 0;
	ft_ft(&nbr);
	printf("%i\n", nbr);
	return 0;
}

int		test2(void)
{
	int a, b;
	a = 2;
	b = 4;

	printf("%i, %i\n", a, b);

	ft_swap(&a, &b);
	printf("swaped: %i, %i\n", a, b);
	return 0;
}

int		div_mod(void)
{
	int c, d, div, mod;
	c = 76;
	d = 10;

	ft_div_mod(c, d, &div, &mod);
	printf("div: %i, mod: %i\n", div, mod);
	return 0;
}

int		ultimate_div_mod(void)
{
	int a;
	int b;

	a = 98;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("udiv: %i, umod: %i\n", a, b);
	return 0;
}


int		putstr()
{
	char *string = "Why Timmy , whyyyyyy?!\n";
	ft_putstr(string);
	return 0;
}

int		strln()
{
	char *string = "hello";
	ft_strlen(string);
	printf("%i\n", ft_strlen(string));
	return 0;
}

int rev_int()
{
	int array[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int *tab = &array[0];
	int size = 13;
	int i = 0;
	while(i < size)
	{
		printf("%i, ", array[i]);
		i++;
	}
			printf("\n");
	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%i, ", array[i]);
		i++;
	}
			printf("\n");
	return 0;
}

int sort()
{
		int array[13] = {11, 1, 20, 3, 4, 15, 6, 7, 71, 9, 10, 11, 0};
	int *tab = &array[0];
	int size = 13;
	int i = 0;
	while(i < size)
	{
		printf("%i, ", array[i]);
		i++;
	}
			printf("\n");
	i = 0;
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%i, ", array[i]);
		i++;
	}
			printf("\n");
	return 0;
}

