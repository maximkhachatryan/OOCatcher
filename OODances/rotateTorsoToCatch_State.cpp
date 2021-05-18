#include "rotateTorsoToCatch_state.h"
#include "catch_State.h"

void rotateTorsoToCatch_State::handle_step(walker* walker)
{
	body* body = walker->get_body();

	double ang = 30;//TODO: Calculate rotation angle to be able to catch the object
	body->RotateTorso(ang);
	body->CollectOnLeftFoot(body->left_foot());

	walker->set_state(new catch_State(nullptr));
}
