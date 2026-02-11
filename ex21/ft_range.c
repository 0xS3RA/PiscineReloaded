
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	res = 0;
	if (min >= max)
		return (res);
	res = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
