#include "harl.hpp"

harl::harl(void)
{
}

harl::~harl()
{
}
void	harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	harl::check(std::string &str)
{
	std::string	number[]  = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	for (i = 0; i <= 4; i++)
	{
		if (str == number[i])
			break ;
	}
	switch(i) {
		case 0 :
			debug();
			break ;
		case 1 :
			info();
			break ;
		case 2 :
			warning();
			break ;
		case 3 :
			error();
			break ;
	}
}