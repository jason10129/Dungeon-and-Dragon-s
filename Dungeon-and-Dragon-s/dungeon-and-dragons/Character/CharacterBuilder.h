#ifndef CHARACTER_BUILDER_H
#define CHARACTER_BUILDER_H
#include "Fighter.h"
#include "../Dice/Dice.h"
#include "CharacterAttr.h"
using namespace std;

class CharacterBuilder : public Subject{

public:
	CharacterBuilder(string fighterType, int level);
	Fighter* getCharacter();
	void createCharacter();
	virtual void setPlayerType() = 0;
	string getFighterType();
	int getFighterLevel();

protected:
	Fighter* c_character;
	string fighterType;
	int fighterLevel;
};

class PlayerCharacterBuilder : public CharacterBuilder {

public:
	PlayerCharacterBuilder(string fighterType, int level);
	void setPlayerType();

};

class AggressorCharacterBuilder : public CharacterBuilder {

public:
	AggressorCharacterBuilder(string fighterType, int level);
	void setPlayerType();

};
class FriendlyCharacterBuilder : public CharacterBuilder {

public:
	FriendlyCharacterBuilder(string fighterType, int level);
	void setPlayerType();

};

#endif
