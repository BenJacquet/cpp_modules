/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:04:43 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 15:28:36 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/megaphone.hpp"

int	main(int ac, char **av)
{
	int	i = 1;
	std::string str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
		str.append(av[i++]);
	i = 0;
	while (str[i] != '\0')
	
		std::cout << (char)std::toupper(str[i++]);
	std::cout << std::endl;
	return (0);
}