#pragma once
#include "walkerState.h"
class rotateTorsoToCatch_State :
    public walkerState
{
    void handle_step(walker* walker) override;
};

