/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:32:35 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 18:45:27 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		weapon;
	std::string	name;
public:
	HumanA(void);
	~HumanA();
	void	attack(void);
};

HumanA::HumanA(std::string name, std::string weapon)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}
