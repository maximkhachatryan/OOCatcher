#pragma once

class walker;

#include "walkerState.h"
#include "body.h"

class walker {
private:
	body* _body;
	walkerState* _walkerState;
public:
	walker(body* body, walkerState *walkerState);

	void set_state(walkerState* walkerState);
	body* get_body();
	void do_next_step();
	bool try_to_catch();

	~walker();
};