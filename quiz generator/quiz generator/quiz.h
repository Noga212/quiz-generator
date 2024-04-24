#pragma once
#include "question.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <random>

class Quiz
{
public:
	void startQuiz();
	void setNumOfQuestions();
	void addQuestionsVector(std::vector <Question> questionVector);

private:
	std::vector <Question> dataBase;
	int numOfQuestions;
};