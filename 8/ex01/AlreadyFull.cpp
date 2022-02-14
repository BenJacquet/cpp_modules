/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AlreadyFull.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:33:56 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 15:30:05 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AlreadyFull.hpp"

const char* AlreadyFull::what() const throw() {return ("Span is already full.");}