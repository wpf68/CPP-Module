#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}


std::string const&	Weapon::getType(void)
{
	std::string const& armeREF = this->_type;

	return (armeREF);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;


}