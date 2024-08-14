/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:05:35 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 15:38:03 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Default Constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other) return (*this);
	this->_HitPoints    = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (_HitPoints <= 0) {
		std::cout << _name << ": Just trash now." << std::endl;
		return;
	}
	if (_EnergyPoints <= 0) {
		std::cout << _name << ": Battery is empty." << std::endl;
		return;
	}
	--_EnergyPoints;
	std::cout << _name << ": attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_HitPoints <= 0) {
		std::cout << _name << ": Is already trashed." << std::endl;
		return;
	}
	if ((_HitPoints -= amount) <= 0) {
		_HitPoints = 0;
		std::cout << _name << ": Took " << amount << " of Damage and was destroyed" << std::endl;
		return;
	}
	std::cout << _name << ": Took " << amount << " of Damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_HitPoints <= 0) {
		std::cout << _name << ": Just trash now." << std::endl;
		return;
	}
	if (_EnergyPoints <= 0) {
		std::cout << _name << ": Battery is empty." << std::endl;
		return;
	}
	--_EnergyPoints;
	_HitPoints += amount;
	std::cout << _name << ": Has repaired " << amount << " HitPoints" << std::endl;
}
