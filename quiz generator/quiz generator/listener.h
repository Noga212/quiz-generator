#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "quiz.h"

class listener
{
public:
	void receiveData();
	void analize();
	void parser();
	
private:
	std::string input;
	Quiz quiz;

};