/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:55:29 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/12 16:23:45 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private :
		std::string name_;
	public :
		Zombie(std::string name);
		~Zombie();
		void	Zombie_said(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
