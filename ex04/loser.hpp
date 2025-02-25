/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:15:35 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/24 14:39:40 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_HPP
#define LOSER_HPP

#include <string>
#include <iostream>
// #include <ofstream>
// #include <ifstream>
#include <fstream>

class	loser {
	private :
		std::string filename_;
	public	:
		loser(std::string filename);
		~loser();
};

#endif

