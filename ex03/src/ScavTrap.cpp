/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:52 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:10:44 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap: " << this->_name << " assembled!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name) {
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this == &other) return (*this);
		this->_HitPoints    = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (_HitPoints <= 0) {
		std::cout << _name << ": Just trash now." << std::endl;
		return;
	}
	if (_EnergyPoints <= 0) {
		std::cout << _name << ": Battery is empty." << std::endl;
		return;
	}
	--_EnergyPoints;
	std::cout << "ScavTrap " <<  _name << ": scavenges " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	if (_HitPoints <= 0) {
		std::cout << _name << ": Just trash now." << std::endl;
		return;
	}
	std::cout << _name <<  ": Guarding Gate" << std::endl;
}
