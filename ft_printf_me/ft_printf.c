#include "ft_printf.h"

int	letters(va_list *a, const char *s)
{
	if (*s == '%')
		return(ft_putchar('%'));
	else if (*s == 'c')
		return(ft_putchar(va_arg(*a, int)));
	else if (*s == 's')
		return(ft_putstr(va_arg(*a, char *)));
	else if (*s == 'd' || *s == 'i')
		return(ft_putnbr(va_arg(*a, int)));
	else if (*s == 'u')
		return(ft_putnbr_base(va_arg(*a, unsigned int), "0123456789", 0));
	else if (*s == 'p')
	{
		ft_putstr("0x");
		return(2 + ft_putnbr_base(va_arg(*a, unsigned long int), "0123456789abcdef", 0));
	}
	else if (*s == 'x')
		return(ft_putnbr_base(va_arg(*a, unsigned int), "0123456789abcdef", 0));
	else if (*s == 'X')
		return(ft_putnbr_base(va_arg(*a, unsigned int), "0123456789ABCDEF", 0));
	return 0;
}

int ft_printf(const char *s, ...)
{
	va_list a;
	va_start(a, s);
	int	len;

	// len = ft_strlen(s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			len += letters(&a, s);
			s++;
		}
		else
		{
			len++;
			write(1, &*s, 1);
			s++;
		}
	}
	va_end(a);
	return (len);
}

// int main(void)
// {
// 	printf("sayı%d\n",ft_printf(" %c %c %c ", '4', '2', '3'));
// 	printf("sayı%d\n",printf(" %c %c %c ", '1', '2', '3'));
// 	printf("sayı%d\n",ft_printf(" %s %s %s ", "omer", "faruk", "balaban "));
// }
// int main(void)
// {
// 	char *p = "omer";
// 	printf("%d\n", printf("%p\n", p));
// 	printf("%d\n", ft_printf("%p\n", p));
// }
// int main(void)
// {
// 	// printf("%d\n",ft_printf("%p%p", 0, 0));
// 	printf("%d\n",ft_printf("%d %d %d ", 25 ,30 ,35));
// 	printf("%d\n",printf("%d %d %d ", 25 ,30 ,35));
// 	// printf("%d\n",printf("%p%p", 0, 0));
// }
int main(void)
{
	system("leaks m");
}