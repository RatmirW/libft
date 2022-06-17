#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s != 0 && fd != -1)
	{
		i = 0;
		while (s[i])
		{
			write(fd, &s[i], 1);
			++i;
		}
	}
}
