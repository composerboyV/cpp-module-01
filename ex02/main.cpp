/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:37:19 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/17 12:46:08 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Print meory address" << std::endl;
	std::cout << "str address	:" << &str << std::endl;
	std::cout << "stringPTR address	:" << stringPTR << std::endl;
	std::cout << "stringREF address	:" << &stringREF << std::endl;

	std::cout <<std::endl;
	std::cout << "Print value of string" <<std::endl;
	std::cout << "str value		:" << str << std::endl;
	std::cout << "stringPTR value	:" << *stringPTR << std::endl;
	std::cout << "stringREF value	:" << stringREF << std::endl;
	
	return (0);
}
