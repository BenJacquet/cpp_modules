/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:04:43 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/18 16:58:28 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/megaphone.hpp"

using namespace std;

char	*concatenate(int n, char **tab)
{
	int		i = 0;
	char	*str = NULL;

	str = new char;
	while (i < n)
	{
		str = strcat(str, tab[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 1)
		return (0);
	char str = *concatenate(ac, av + 1);
	cout << str << endl;
	return (0);
}