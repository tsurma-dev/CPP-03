/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:05:35 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 17:48:38 by tsurma           ###   ########.fr       */
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
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other) return (*this);
	this->_name = other._name;
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
	std::cout << _name << ": Took " << amount << " of Damage";
	if (amount > 2147483647 / 2)
		amount = _HitPoints + 1;
	if ((_HitPoints -= amount) <= 0) {
		_HitPoints = 0;
		std::cout << " and was destroyed";
	}
	std::cout << std::endl;
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
	if (amount > 2147483647)
		amount = 2147483647 - _HitPoints - 1;
	_HitPoints += amount;
	std::cout << _name << ": Has repaired " << amount << " HitPoints" << std::endl;
}

void ClapTrap::status() {
	std::cout << "Name = " << _name << "\nHP = " << _HitPoints << "\nEP = " << _EnergyPoints << "\nAD = " << _AttackDamage << std::endl;
}
