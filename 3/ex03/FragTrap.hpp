/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:17:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:31:21 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap & operator=(FragTrap & Fragtrap);
	void highFiveGuys(void);
};
