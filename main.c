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
			if (ft_atoi(argv[i], &failed) == 0)
			{
				if (failed == 1)
				{
					ft_printf("Error\n");
					return (1);
				}
				else
					arr[i - 1] = 0;
			}
			else
				arr[i - 1] = ft_atoi(argv[i], &failed);
			i++;
		}
	}
	return (0);
}
