/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:51:16 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/20 13:34:03 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " is constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap " << getName() << " is constructed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if(this != &other)
	{
		setHitPoints(other.getHitPoints());
		setEnergyPoints(other.getEnergyPoints());
		setAttackDamage(other.getAttackDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " is destructed" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if(getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void	ScavTrap::guardGate()
{
	if(getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
	}
}


