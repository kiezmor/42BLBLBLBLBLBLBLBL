#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char a[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[100] = "06 @ salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
}
