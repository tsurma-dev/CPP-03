/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:02 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 15:08:56 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a( "Scav" );
	a.status();
	a.attack( "Dummy" );
	a.beRepaired(5);
	a.takeDamage(5);
	a.guardGate();
}
