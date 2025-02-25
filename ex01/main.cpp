/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:53:46 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/12 16:24:45 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string str;
	Zombie *zombie = newZombie("baby Zombie");
	randomChump("host Zombie");
	delete zombie;
	return (0);
}