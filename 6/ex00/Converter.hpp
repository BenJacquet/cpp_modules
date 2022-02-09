#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Converter
{

	public:
		Converter();
		Converter( char c);
		Converter( int i);
		Converter( float f );
		Converter( double d );
		Converter( Converter const & src );
		~Converter();

		Converter &		operator=( Converter const & rhs );

	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
};

std::ostream &			operator<<( std::ostream & o, Converter const & i );