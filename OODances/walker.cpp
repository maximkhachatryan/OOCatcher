#include "walker.h"

walker::walker(body* body, walkerState* walkerState)
{
	this->_body = body;
	this->_walkerState = walkerState;
}

void walker::set_state(walkerState* walkerState)
{
	this->_walkerState = walkerState;
}

body* walker::get_body()
{
	return this->_body;
}

void walker::do_next_step()
{
	this->_walkerState->handle_step(this);
}

bool walker::try_to_catch()
{
	return false;
}

walker::~walker()
{
	delete _walkerState;
}
