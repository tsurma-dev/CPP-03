/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:45 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:31:38 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
  int _HitPoints;
  int _EnergyPoints;
  int _AttackDamage;

public:
  ScavTrap(std::string name);
  ~ScavTrap();
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  virtual void attack(const std::string &target);
  void guardGate();
};

#endif
