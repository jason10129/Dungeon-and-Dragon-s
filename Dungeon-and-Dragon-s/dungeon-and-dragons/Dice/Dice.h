#pragma once

#include <stdio.h>
#include <iostream>
#include <regex>
#include <random>
#include <ctime>
#include "../Subject.h"
using namespace std;

class Dice : public Subject{
	public:
		Dice();
		~Dice();
		vector<int> roll(string dice);
};

