#include "step1_State.h"
#include "step2_State.h"
#include "catch_State.h"

void step1_State::handle_step(walker* walker)
{
	walker->get_body()->RotateRightLeg(90);
	walker->set_state(new catch_State(new step2_State()));
}
