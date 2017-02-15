#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main()
{
	char a[100] = "salut comment tu vas";
	char b[100] = "42";
	char c[100] = "";
	char d[100] = "yO";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
}
