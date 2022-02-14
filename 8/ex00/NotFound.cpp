/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFound.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:33:56 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 13:39:34 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotFound.hpp"

const char* NotFound::what() const throw() {return ("No occurence found in this vector.");}