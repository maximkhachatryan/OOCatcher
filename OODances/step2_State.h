#pragma once
#include "walkerState.h"
class step2_State :
    public walkerState
{
    void handle_step(walker* walker) override;
};

