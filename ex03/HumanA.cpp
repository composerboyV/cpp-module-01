#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name) , weapon(weapon)
{
	
}
HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout << name << "some other type of club" << weapon.getType() << std::endl;	
}