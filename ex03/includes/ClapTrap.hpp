/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:04:21 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:31:31 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
public:
	ClapTrap( std::string name);
	virtual ~ClapTrap();
	ClapTrap( const ClapTrap& copy);
	ClapTrap& operator=( const ClapTrap& other );
	virtual void attack(const std::string& target);
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void status();
};




#endif
