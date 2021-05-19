#pragma once
#include "walkerState.h"
class step3_State :
    public walkerState
{
    void handle_step(walker* walker) override;
};

