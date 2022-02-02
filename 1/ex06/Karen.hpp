/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:31:28 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:33:35 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <functional>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen( void );
	~Karen( void );
	void complain( std::string level );
};