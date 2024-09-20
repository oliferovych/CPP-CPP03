/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:25:09 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/20 13:24:19 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("John");
	ClapTrap clap2(clap);

	clap2.attack("Nicolas");
	clap.attack("Lucas");
	clap.takeDamage(1);
	clap.beRepaired(5);
	return 0;
}
