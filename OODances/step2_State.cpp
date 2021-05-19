#include "step2_State.h"
#include "step3_State.h"
#include "point.h"
#include "catch_State.h"

void step2_State::handle_step(walker* walker)
{
	point left_foot = walker->get_body()->left_foot();
	walker->get_body()->RotateLeftLeg(-45);
	walker->get_body()->RotateRightLeg(-45);
	walker->get_body()->RotateLeftArm(-45);
	walker->get_body()->RotateRightArm(-45);
	walker->get_body()->RotateTorso(-45);
	walker->get_body()->CollectOnLeftFoot(left_foot);
	walker->set_state(new catch_State(new step3_State()));
}
