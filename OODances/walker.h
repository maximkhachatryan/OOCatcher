#pragma once

class walker;

#include "walkerState.h"
#include "body.h"

class walker {
private:
	body* _body;
	walkerState* _walkerState;
	point _objectToCatch;
public:
	walker(body* body, walkerState *walkerState, point objectToCatch);

	point ObjectToCatch();
	void set_state(walkerState* walkerState);
	body* get_body();
	void go();
	~walker();
};