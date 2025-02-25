/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:14:03 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/20 20:50:28 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

void	new_replace(std::string filename_, std::string s1, std::string s2)
{
	std::ofstream	file_out;
	std::string	new_file;
	std::string	content;
	if (file_out.fail())
	{
		std::cout << "create file error" << std::endl;
		return ;
	}
	std::ifstream	file_in;
	file_in.open(filename_);
	if (!file_in)
	{
		std::cout << "Open Error" << std::endl;
		return ;
	}
	int	s1_len = s1.length();
	int s2_len = s2.length();
	int	i = 0;
	new_file = filename_;
	new_file.append(".replace");
	file_out.open(new_file);
	while (std::getline(file_in, content)) {
	i = 0;
	while (true) {
		i = content.find(s1, i);
		if (i == std::string::npos)
		{
			break ;
		}
		content.erase(i, s1_len);
		content.insert(i, s2);
		i += s2_len;
		std::cout <<  "!!!!\n" << std::endl;
		}
		file_out << content;
		if (file_in.eof()) {
			std::cout <<  "@@@@@\n" << std::endl;
			return ;
		}
		file_out << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (-1);
	if (argc == 4) {
	std::string filename_ = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.compare(s2) == -1)
	{
		return (-1);
	}
	else
		new_replace(filename_, s1, s2);
	}
	return (0);
}
