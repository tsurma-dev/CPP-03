/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:45 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/14 15:13:08 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP_
#define FragTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:


	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap( const FragTrap& other);
		FragTrap& operator=( const FragTrap& other );
		void attack(const std::string& target);
		void highFivesGuys();

};

#endif
