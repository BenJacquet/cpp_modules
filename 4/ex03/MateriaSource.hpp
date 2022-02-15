/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:49:07 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 22:18:42 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource :  public IMateriaSource
{
	private:
		AMateria* _source[4];
	public:
		//CANONICAL FORM COMPONENTS
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		~MateriaSource();
		MateriaSource & operator=(const MateriaSource & src);
		//OTHER COMPONENTS
		void learnMateria(AMateria* source);
		AMateria* createMateria(std::string const & type);
		AMateria* getSource(int i) const;
};
