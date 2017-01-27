//! @file
//! @brief Header file for the FriendlyStrategy class
//!
//! Implement character (friendly or unfriendly) actions as strategy pattern
//! Each turn, a character can proceed with:
//! - move
//! - attack
//! - free action
//!
//! Must implement these ConcreteStrategies:
//! 1) a HumanPlayerStrategy that lets the user decide where to move, who to attack, and what free actions to take;
//! 2) an AggressorStrategy that make the character automatically move towards and attack the player character;
//! 3) a FriendlyStrategy that makes the character automatically move towards the character, but not attack unless attacked, in which case it adopts the AggressorStrategy.klA
#pragma once

#include "Character.h"
#include "CharacterStrategy.h"
#include "../Map/Map.h"

//! Class representing the Friendly strategy for a particular Character Object. It inherits from the Strategy abstract class.
class FriendlyStrategy : public CharacterStrategy {
  using CharacterStrategy::execute;
  public:
    void execute(Map& m, Character& c);
    void moveCloserToHuman(Map& m, Character &c);
    int shortestDistanceToHuman(int charPosX, int charPosY, int humanPosX, int humanPosY);
};
