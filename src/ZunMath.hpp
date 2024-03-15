#pragma once
#include "inttypes.hpp"
#include <Windows.h>

struct ZunVec2
{
    f32 x;
    f32 y;
};
C_ASSERT(sizeof(ZunVec2) == 0x8);

struct ZunVec3
{
    f32 x;
    f32 y;
    f32 z;
};
C_ASSERT(sizeof(ZunVec3) == 0xC);
