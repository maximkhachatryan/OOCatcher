#pragma once

class walker;

#include "walkerState.h"

class walker {
private:
	walkerState *_walkerState;
public:
	void do_next_step();
	bool try_to_catch();

	~walker();
};