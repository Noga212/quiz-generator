#pragma once
#include <string>
#include "quiz.h"
class listener
{
public:
	void receiveData();
	void analize();
	
private:
	std::string input;


};