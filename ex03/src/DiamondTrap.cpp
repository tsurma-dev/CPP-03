/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:40:34 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:31:53 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_trap"), ScavTrap(""), FragTrap("")
{
	this->_name = name;
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Constructor for the name " << this->_name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond Destructor called." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::status(void) {
	std::cout << "Name: " << _name << "\nHitPoints: " << _HitPoints << "\nEnergy: " << _EnergyPoints << "\nAttack: " << _AttackDamage << std::endl;
}
