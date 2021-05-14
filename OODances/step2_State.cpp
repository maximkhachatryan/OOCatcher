#include "step2_State.h"

void step2_State::handle_step(walker* walker)
{
	walker->get_body()->RotateLeftLeg(-45);
	walker->get_body()->RotateRightLeg(-45);
	walker->get_body()->RotateLeftArm(-45);
	walker->get_body()->RotateRightArm(-45);
	walker->get_body()->RotateTorso(-45);
	walker->get_body()->CollectOnLeftFoot();
}
