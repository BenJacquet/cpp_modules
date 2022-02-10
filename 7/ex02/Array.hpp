/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:21:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 14:28:46 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:
		Array() : _size(1) {this->_content = new T[1]();};
		Array(unsigned int n) : _size(n) {this->_content = new T[n]();};
		Array(Array const & src) : _size(src.getSize())
		{
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_content[i] = src.getContent(i);
		}
		~Array() {delete[] this->_content;};

		unsigned int	getSize() const {return (this->_size);};
		T				getContent(unsigned int i) const {return (i < this->_size ? this->_content[i] : 0);};


		Array &			operator=(T const & rhs)
		{
			if (this == &rhs)
				return (*this);
			delete[] this->_content;
			this->_size = rhs.getSize();
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_content[i] = rhs.getContent(i);
		}
		T				operator[](unsigned int i)
		{
			if (i < this->getSize())
				return (this->getContent(i));
			else
				throw std::exception();
			return (0);
		}
		const T			operator[](unsigned int i) const
		{
			if (i < this->getSize())
				return (this->getContent(i));
			else
				throw std::exception();
			return (0);
		}
	private:
		T				*_content;
		unsigned int	_size;
};

template <typename T>
std::ostream &			operator<<(std::ostream & o, Array<T> const & i)
{
	o << "Array contains " << i.getSize() << " elements :" << std::endl;
	for (unsigned int idx = 0; idx < i.getSize(); idx++)
		o << "[" << idx << "] = " << i.getContent(idx) << std::endl;
	return (o);
}