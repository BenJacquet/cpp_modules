#include "Converter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter()
{
}

Converter::Converter( const Converter & src )
{
}


Converter::Converter( char c ) : _c(c)
{
	this->_i = ctoi();
	this->_d = ctod();
	this->_f = ctof();
}

Converter::Converter( int i ) : _i(i)
{
	
}

Converter::Converter( float f ) : _f(f)
{

}

Converter::Converter( double d ) : _d(d)
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converter &				Converter::operator=( Converter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Converter const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */