/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:25:09 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/23 13:31:49 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	FragTrap frag("Doe");
	FragTrap frag2("Hughie");

	clap.attack("Doe");
	frag.takeDamage(5);
	frag2.attack("John");
	clap.takeDamage(frag2.getAttackDamage());
	clap.beRepaired(5);
	frag.beRepaired(5);
	frag.highFivesGuys();
	frag2.highFivesGuys();
	return (0);
}
