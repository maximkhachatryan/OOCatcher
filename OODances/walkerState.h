#pragma once
class walkerState;

#include "walker.h";

class walkerState {
public:
	virtual void handle_step(walker* walker) = 0;

	virtual ~walkerState();
};