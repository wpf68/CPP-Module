#include "Zombie.hpp"

	/*Constructor*/
Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << RED << "\n" << this->_name << WHITE << " is created" << NONE << std::endl;
}

	/*Destructor*/
Zombie::~Zombie(void)
{
	std::cout << RED << this->_name << WHITE << " is destroy\n\n" << NONE << std::endl;
}

void Zombie::announce(void)
{
	std::cout << RED << "\n" << this->_name << WHITE << ": BraiiiiiiinnnzzzZ...\n" << NONE << std::endl;
}