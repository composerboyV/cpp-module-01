#ifndef	HARL_HPP
# define	HARL_HPP

#include <iostream>
#include <string>


class harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	harl(/* args */);
	~harl();
	void	check(std::string &str);
};




#endif