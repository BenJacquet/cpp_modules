/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotSpan.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 15:32:13 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NotSpan.hpp"

const char* NotSpan::what() const throw() {return ("Not enough values to be considered a span.");}