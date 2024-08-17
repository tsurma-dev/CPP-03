/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:45 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 19:31:34 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:
public:
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);
  virtual void attack(const std::string &target);
  void highFivesGuys();
};

#endif
