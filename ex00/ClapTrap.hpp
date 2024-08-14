/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:04:21 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 12:12:04 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
public:
	ClapTrap( std::string name);
	~ClapTrap();
	ClapTrap( const ClapTrap& );
	ClapTrap& operator=( const ClapTrap& other );
	void attack(const std::string& target);
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};




#endif
