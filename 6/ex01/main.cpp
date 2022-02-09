/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:48:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 15:20:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data	*	data = new Data;
	uintptr_t	serialized = serialize(data);

	data->address = data;
	data->char_member = 0;
	data->int_member = 0;

	std::cout << "data Address = " << data << std::endl;
	std::cout << "Serialized data Address = " << serialized << std::endl;
	std::cout << "Deserialized data Address = " << deserialize(serialized) << std::endl;
	delete data;
	return (0);
}