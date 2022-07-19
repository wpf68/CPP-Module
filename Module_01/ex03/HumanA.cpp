#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weaponREF(weapon)
{
}

HumanA::~HumanA()
{
}


void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weaponREF.getType() << std::endl;
}