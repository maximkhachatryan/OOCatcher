#include "step1_State.h"

void step1_State::handle_step(walker* walker)
{
	walker->get_body()->RotateRightLeg(90);
	walker->get_body()->CollectOnLeftFoot();
}
