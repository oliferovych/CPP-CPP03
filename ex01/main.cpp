/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:25:09 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/20 13:22:23 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	ScavTrap scav("Doe");
	ScavTrap scav2(scav);

	clap.attack("Doe");
	scav.takeDamage(5);
	scav2.attack("John");
	clap.takeDamage(scav2.getAttackDamage());
	clap.beRepaired(5);
	scav.beRepaired(5);
	scav.guardGate();
	scav2.guardGate();
	return (0);
}
