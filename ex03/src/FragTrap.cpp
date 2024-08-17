/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:52 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:10:21 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_HitPoints = 100;
  this->_EnergyPoints = 100;
  this->_AttackDamage = 30;
  std::cout << "FragTrap: " << this->_name << " assembled!" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name) {
  std::cout << "Frag Copy constructor called" << std::endl;
  *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this == &other)
    return (*this);
  this->_name = other._name;
  this->_HitPoints = other._HitPoints;
  this->_EnergyPoints = other._EnergyPoints;
  this->_AttackDamage = other._AttackDamage;
  return (*this);
}

void FragTrap::attack(const std::string &target) {
  if (_HitPoints <= 0) {
    std::cout << _name << ": Just trash now." << std::endl;
    return;
  }
  if (_EnergyPoints <= 0) {
    std::cout << _name << ": Battery is empty." << std::endl;
    return;
  }
  --_EnergyPoints;
  std::cout << "FragTrap " << _name << ": Frags " << target << ", causing "
            << _AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
  if (_HitPoints <= 0) {
    std::cout << _name << ": Just trash now." << std::endl;
    return;
  }
  std::cout << _name << ": Put 'em up (If you want to)" << std::endl;
}
