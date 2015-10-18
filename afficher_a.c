#include <unistd.h>

int		main()
{
	int i;

	i = 5;
	while( i >= 0)
	{
	write(1, "a",1);
	i--;
	}
	write(1, "\n", 1);
}
