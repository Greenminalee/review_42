#include <unistd.h>

void ft_is_negative(int n)
{
	if((n) >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int main(int argc, char *argv[])
{
	int num;

	num = argv[1][0] - '0';
	ft_is_negative(num);
	return (0);
}
