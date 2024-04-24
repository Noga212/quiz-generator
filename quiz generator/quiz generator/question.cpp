#include "question.h"

const std::string& Question::getQuestion()
{
	return theQuestion;
}

std::vector<std::string>& Question::getAnswers()
{
	return answers;
}

const int Question::getCorrectNumber()
{
	return CorrectAnswerNumber;
}

std::string& Question::getCorrectAnswer()
{
	return answers[CorrectAnswerNumber - 1];
}

void Question::setTheQuestion(std::string questionToSet)
{
	theQuestion = questionToSet;
}

void Question::insertAnswer(std::string answer)
{
	answers.push_back(answer);
}

void Question::setCorrectAnswer(char correctAnswer)
{
	CorrectAnswerNumber = correctAnswer - 48;
}

void Question::printAnswers()
{
	for (int i = 0; i < answers.size(); ++i)
	{
		std::cout << i+1 << ") " << answers[i] << std::endl ;
	}
}
