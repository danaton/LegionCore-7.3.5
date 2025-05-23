/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
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

#ifndef TRINITY_CONFUSEDGENERATOR_H
#define TRINITY_CONFUSEDGENERATOR_H

#include "MovementGenerator.h"
#include "PathGenerator.h"
#include "Timer.h"

template<class T>
class ConfusedMovementGenerator : public MovementGeneratorMedium<T, ConfusedMovementGenerator<T>>
{
    public:
        explicit ConfusedMovementGenerator() : _path(nullptr), _timer(0), _reference(0.f, 0.f, 0.f), _interrupt(false) { }
        ~ConfusedMovementGenerator();

        MovementGeneratorType GetMovementGeneratorType() const override { return CONFUSED_MOTION_TYPE; }

        void DoInitialize(T&);
        void DoFinalize(T&);
        void DoReset(T&);
        bool DoUpdate(T&, uint32);

    private:
        PathGenerator* _path;
        TimeTracker _timer;
        Position _reference;
        bool _interrupt;
};

#endif

