/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:51:16 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/23 13:31:12 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " is constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap " << getName() << " is constructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
	{
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " is destructed" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if(getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void	FragTrap::highFivesGuys()
{
	if(getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "FragTrap " << getName() << " high fives the guys" << std::endl;
	}
}


