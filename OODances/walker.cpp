#include "walker.h"

walker::walker(body* body, walkerState* walkerState, point objectToCatch)
{
	this->_body = body;
	this->_walkerState = walkerState;
	this->_objectToCatch = objectToCatch;
}

point walker::ObjectToCatch()
{
	return this->_objectToCatch;
}

void walker::set_state(walkerState* walkerState)
{
	this->_walkerState = walkerState;
}

body* walker::get_body()
{
	return this->_body;
}

void walker::go()
{
	this->_walkerState->handle_step(this);
}


walker::~walker()
{
	delete _walkerState;
}
