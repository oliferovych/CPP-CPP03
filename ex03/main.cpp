/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:25:09 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:06 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	FragTrap frag("Doe");
	ScavTrap scav("Hughie");

	DiamondTrap diamond("Diamond");

	clap.attack("Doe");
	frag.attack("John");
	scav.attack("John");
	diamond.attack("John");

	diamond.whoAmI();
	return (0);
}
