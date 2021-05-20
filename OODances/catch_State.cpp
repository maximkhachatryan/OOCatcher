#include "catch_State.h"
#include "rotateTorsoToCatch_State.h"
#include "step1_state.h"

catch_State::catch_State(walkerState* nextStep)
{
	this->_nextStep = nextStep;
}

void catch_State::handle_step(walker* walker)
{
	body* body = walker->get_body();
	double dist = body->neck().dist(walker->ObjectToCatch());
	if (dist - body->arm_size() < 1) {// can catch
		//TODO: Rotate arms to catch the object
		walker->set_state(nullptr);
	}
	else if (dist < body->arm_size()) {
		walker->set_state(new rotateTorsoToCatch_State());
	}
	else {
		walker->set_state(this->_nextStep);
	}
}
