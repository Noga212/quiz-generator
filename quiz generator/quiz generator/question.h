#pragma once
#include <string>
#include <vector>


class Question
{
public:
	Question(std::string question, std::vector<std::string> answersVector,
		int Correct) :
		theQuestion(question), answers(answersVector), CorrectAnswerNumber(Correct)
	{};

	const std::string& getQuestion()
	{
		return theQuestion;
	};

	std::vector <std::string>& getAnswers()
	{
		return answers;
	};

	const int GetCorrectNumber()
	{
		return CorrectAnswerNumber;
	};

	std::string& getCorrectAnswer()
	{
		return answers[CorrectAnswerNumber -1];
	};

private:
	const std::string theQuestion;
	std::vector <std::string> answers;
	const int CorrectAnswerNumber;		//the number of the correct answer, its index is -1.
};