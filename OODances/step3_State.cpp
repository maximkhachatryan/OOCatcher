#include "step3_State.h"
#include "step1_State.h"
#include "catch_State.h"

void step3_State::handle_step(walker* walker)
{
	point right_foot = walker->get_body()->right_foot();
	walker->get_body()->RotateRightLeg(-45);
	walker->get_body()->RotateRightLeg(45);
	walker->get_body()->RotateTorso(45);
	walker->get_body()->RotateLeftArm(45);
	walker->get_body()->RotateRightArm(45);
	walker->get_body()->CollectOnRightFoot(right_foot);
	walker->set_state(new catch_State(new step1_State()));
}
