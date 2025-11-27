#include "push_swap.h"

int	main(int argc, char **argv)
{
	int arr[10] = {0};
	int i = 1;
	int failed = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			arr[i - 1] = ft_atoi(argv[i], &failed);
			if (failed == 1)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			else
				failed = 0;
			i++;
		}
	}
	return (0);
}
