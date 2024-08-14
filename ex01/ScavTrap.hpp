/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:45 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 17:53:23 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	private:

	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap( const ScavTrap& other);
		ScavTrap& operator=( const ScavTrap& other );
		void attack(const std::string& target);
		void guardGate();

};

#endif
