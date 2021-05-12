#pragma once
class walkerState;

#include "walker.h";

class walkerState {
protected:
	walker* _walker;
public:
	virtual void handle_substep1() = 0;
	virtual void handle_substep2() = 0;
	virtual void handle_substep3() = 0;
	virtual void handle_substep4() = 0;
	virtual void handle_substep5() = 0;

	virtual ~walkerState() {
	};
	void set_walker(walker* walker);
};