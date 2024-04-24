#pragma once
#include <string>
#include <vector>
#include <iostream>


class Question
{
public:
	

	const std::string& getQuestion();

	std::vector <std::string>& getAnswers();

	const int getCorrectNumber();

	std::string& getCorrectAnswer();

	void setTheQuestion(std::string questionToSet);

	void insertAnswer(std::string answer);
	void setCorrectAnswer(char correctAnswer);
	void printAnswers();


private:
	std::string theQuestion;
	std::vector <std::string> answers;
	int CorrectAnswerNumber;		//the number of the correct answer, its index is -1.
};