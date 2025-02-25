/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:55:08 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/12 19:38:51 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	std::string name_ = name;
}

Zombie::~Zombie(void)
{
	std::cout<<"Zombie dead\n";
}
void	Zombie::Zombie_said(void)
{
	std::cout << "Foo : BraiiiiiiinnnzzzZ..."<<std::endl;
}