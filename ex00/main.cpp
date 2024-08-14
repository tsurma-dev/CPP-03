/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:02 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 12:47:46 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("ClapTrap");
	ClapTrap b("Copy");

	b.attack("Dummy");

	b.takeDamage(5);
	b.beRepaired(10);
	b.takeDamage(10);
	b.beRepaired(10);
	b.takeDamage(15);
	b.beRepaired(10);
	b = a;
	for (int i = 0; i <= 10; ++i) {
		std::cout << i << "\t";
		b.attack("Dummy");
	}

}
