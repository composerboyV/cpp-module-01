#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	type = type;
}

Weapon::~Weapon(void)
{

}

std::string &Weapon::getType(void)
{
	return (type);
}
void	Weapon::setType(std::string type)
{
	type = type;
}