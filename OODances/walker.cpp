#include "walker.h"

walker::walker(body* body, walkerState* walkerState)
{
	this->_body = body;
	this->_walkerState = walkerState;
}

body* walker::get_body()
{
	return this->_body;
}

walker::~walker()
{
	delete _walkerState;
}
