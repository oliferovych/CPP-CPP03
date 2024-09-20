/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:25:06 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/20 12:36:21 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is destructed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		if(amount > hitPoints)
			hitPoints = 0;
		else
			hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points!" << std::endl;
		energyPoints--;
	}
}
