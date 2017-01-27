#pragma once
#include "Observer.h"
#include "Character/Character.h"
#include "Item/ItemFileIO.h"
#include "Character/CharacterFileIO.h"
#include "Map/Map.h"
#include "Dice/Dice.h"
#include "Character/CharacterBuilder.h"
#include "Character/CharacterStrategy.h"
#include "Character/CharacterGenerator.h"
#include "GUI/Events.h"

class GameLogger : public Observer {

public:
	GameLogger();
	GameLogger(Character * c, bool isLogging);
	GameLogger(Map * map, bool isLogging);
	GameLogger(ItemFileIO * itfio, bool isLogging);
	GameLogger(CharacterFileIO * cfio, bool isLogging);
	GameLogger(Dice * dice, bool isLogging);
	GameLogger(CharacterBuilder* cb, bool isLogging);
	GameLogger(CharacterStrategy* cs, bool isLogging);
	GameLogger(CharacterGenerator* cg, bool isLogging);
	GameLogger(Events* e, bool isLogging);
	~GameLogger();

	void Update();
	void UpdateLog(string className, string methodName, string message);
	void Display(string className, string methodName, string message);
	void toggleLogger(bool trigger);
	void turnOn();
	void turnOff();

	bool getToggleValue();

private:
	Map *_mapSubject;
	Character *_characterSubject;
	ItemFileIO *_itemIOSubject;
	CharacterFileIO *_charIOSubject;
	Dice *_diceSubject;
	CharacterBuilder *_charBuilder;
	CharacterStrategy *_charStrategy;
	CharacterGenerator *_charGenerator;
	Events *_events;

	bool _isActive;
};
