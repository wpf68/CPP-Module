#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie = Zombie(name);
	zombie.announce();
	std::cout << "*** Last line of the program before quit ft randomChump **** \n" << std::endl;
}
