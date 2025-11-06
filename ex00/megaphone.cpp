#include <iostream>

int main(int ac, char *av[])
{
	int i = 1;
	int j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (std::islower(av[i][j]))
				av[i][j] = std::toupper(av[i][j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		std::cout << av[i];
		i++;
	}
	std::cout << '\n';
	

}