/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:21:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 16:09:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:

		// CONSTRUCTORS
		Array() : _size(1) {this->_content = new T[1]();};
		Array(unsigned int n) : _size(n) {this->_content = new T[n]();};
		Array(Array const & src) : _size(src.size())
		{
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_content[i] = src.getContent(i);
		}

		// DESTRUCTOR
		~Array() {delete[] this->_content;};

		// GETTERS
		unsigned int	size() const {return (this->_size);};
		T				getContent(unsigned int i) const {return (i < this->_size ? this->_content[i] : 0);};

		// OPERATOR OVERLOADS
		Array &			operator=(Array const & rhs)
		{
			if (this == &rhs)
				return (*this);
			delete[] this->_content;
			this->_size = rhs.size();
			this->_content = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_content[i] = rhs.getContent(i);
			return (*this);
		}
		T				operator[](unsigned int i)
		{
			if (i < this->size())
				return (this->getContent(i));
			else
				throw Array::OutOfBounds();
			return (0);
		}
		const T			operator[](unsigned int i) const
		{
			if (i < this->size())
				return (this->getContent(i));
			else
				throw Array::OutOfBounds();
			return (0);
		}
		// EXCEPTIONS
		class OutOfBounds : public std::exception
		{
			public:
				virtual const char* what() const throw() {return ("Index is out of bounds");};
		};
	private:
		T				*_content;
		unsigned int	_size;
};

// STREAM INSERTION OPERATOR OVERLOAD
template <typename T>
std::ostream &			operator<<(std::ostream & o, Array<T> const & i)
{
	o << "Array contains " << i.size() << " elements :" << std::endl;
	for (unsigned int idx = 0; idx < i.size(); idx++)
		o << "[" << idx << "] = " << i.getContent(idx) << std::endl;
	return (o);
}