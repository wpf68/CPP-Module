#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* zombiep = new Zombie(name);

	return (zombiep);
}