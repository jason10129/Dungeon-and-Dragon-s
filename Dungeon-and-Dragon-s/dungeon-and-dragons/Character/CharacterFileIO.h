#pragma once

#include <string>
#include <vector>
#include "Fighter.h"
#include "../Subject.h"
#include "../Dependency/json.hpp"

using std::string;
using std::vector;
using json = nlohmann::json;

class CharacterFileIO : public Subject{

public:
	// method to serialize a character into json object
	void saveCharacter(string filePath, Fighter* ch);
	//method to deserialize a character from a json object
	Fighter* readCharacter(string filePath);
	// method used to obtain json format of an item container
	void getItemContainerJson( ItemContainer* bp, json& bpJson );
	//deserialize backpack from a json object
	void loadBackpackItems(json jsonText, Character& ch);
	//deserialize equiped items from a json object
	void loadEquipItems(json jsonText, Character& ch);

};
