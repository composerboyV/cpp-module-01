#include "harl.hpp"

int	main(int argc, char **argv)
{
	harl check;
	// if (argv[1] != "DEBURG" || argv[1] != "INFO" || \
	// argv[1] != "WARNING" || argv[1] != "ERROR")
	// {
	// 	std::cout << "input Error" << std::endl;
	// 	return (0);
	// }
	if (argc != 2)
		return (0);
	std::string str = argv[1];
	check.check(str);
	return (0);
}