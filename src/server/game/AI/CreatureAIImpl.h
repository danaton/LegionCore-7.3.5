/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CREATUREAIIMPL_H
#define CREATUREAIIMPL_H

#include "Common.h"
#include "CreatureAI.h"
#include "EventMap.h"

//template<typename First, typename Second, typename... Rest>
//inline First const& RAND(First const& first, Second const& second, Rest const&... rest)
//{
//    std::reference_wrapper<typename std::add_const<First>::type> const pack[] = { first, second, rest... };
//    return pack[urand(0, sizeof...(rest) + 1)].get();
//}

template<class T>
const T& RAND(const T& v1, const T& v2)
{
    return (urand(0, 1)) ? v1 : v2;
    
}

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3)
 {
    switch (urand(0, 2))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4)
 {
    switch (urand(0, 3))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5)
 {
    switch (urand(0, 4))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6)
 {
    switch (urand(0, 5))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7)
 {
    switch (urand(0, 6))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8)
 {
    switch (urand(0, 7))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9)
     {
    switch (urand(0, 8))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10)
     {
    switch (urand(0, 9))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11)
     {
    switch (urand(0, 10))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11, const T& v12)
     {
    switch (urand(0, 11))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    case 11: return v12;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11, const T& v12, const T& v13)
     {
    switch (urand(0, 12))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    case 11: return v12;
    case 12: return v13;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11, const T& v12, const T& v13, const T& v14)
     {
    switch (urand(0, 13))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    case 11: return v12;
    case 12: return v13;
    case 13: return v14;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11, const T& v12, const T& v13, const T& v14, const T& v15)
     {
    switch (urand(0, 14))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    case 11: return v12;
    case 12: return v13;
    case 13: return v14;
    case 14: return v15;
    }
    }

template<class T>
const T& RAND(const T& v1, const T& v2, const T& v3, const T& v4, const T& v5, const T& v6, const T& v7, const T& v8,
    const T& v9, const T& v10, const T& v11, const T& v12, const T& v13, const T& v14, const T& v15, const T& v16)
     {
    switch (urand(0, 15))
         {
    default:
    case 0: return v1;
    case 1: return v2;
    case 2: return v3;
    case 3: return v4;
    case 4: return v5;
    case 5: return v6;
    case 6: return v7;
    case 7: return v8;
    case 8: return v9;
    case 9: return v10;
    case 10: return v11;
    case 11: return v12;
    case 12: return v13;
    case 13: return v14;
    case 14: return v15;
    case 15: return v16;
    }
}
enum AITarget
{
    AITARGET_SELF,
    AITARGET_VICTIM,
    AITARGET_ENEMY,
    AITARGET_ALLY,
    AITARGET_BUFF,
    AITARGET_DEBUFF,
};

enum AICondition
{
    AICOND_AGGRO,
    AICOND_COMBAT,
    AICOND_DIE,
    AICOND_EVADE,
};

#define AI_DEFAULT_COOLDOWN 5000

struct AISpellInfoType
{
    AISpellInfoType();
    AITarget target;
    AICondition condition;
    uint32 cooldown;
    uint32 realCooldown;
    float maxRange;
};

AISpellInfoType* GetAISpellInfo(uint32 i);

TC_GAME_API bool InstanceHasScript(WorldObject const* obj, char const* scriptName);

template<class AI, class T>
AI* GetInstanceAI(T* obj, char const* scriptName)
{
    if (InstanceHasScript(obj, scriptName))
        return new AI(obj);

    return nullptr;
}

#endif

