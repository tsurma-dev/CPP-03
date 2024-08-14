/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:05:35 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 12:47:00 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {
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
	this->HitPoints    = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (HitPoints <= 0) {
		std::cout << name << ": Just trash now." << std::endl;
		return;
	}
	if (EnergyPoints <= 0) {
		std::cout << name << ": Battery is empty." << std::endl;
		return;
	}
	--EnergyPoints;
	std::cout << name << ": attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (HitPoints <= 0) {
		std::cout << name << ": Is already trashed." << std::endl;
		return;
	}
	if ((HitPoints -= amount) <= 0) {
		HitPoints = 0;
		std::cout << name << ": Took " << amount << " of Damage and was destroyed" << std::endl;
		return;
	}
	std::cout << name << ": Took " << amount << " of Damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (HitPoints <= 0) {
		std::cout << name << ": Just trash now." << std::endl;
		return;
	}
	if (EnergyPoints <= 0) {
		std::cout << name << ": Battery is empty." << std::endl;
		return;
	}
	--EnergyPoints;
	HitPoints += amount;
	std::cout << name << ": Has repaired " << amount << " HitPoints" << std::endl;
}
