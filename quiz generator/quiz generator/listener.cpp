#include "listener.h"

void listener::receiveData()
{
	//the listener will keep working, if the user started a quiz we will ask if he wants to restart.
	//if he will want to restart, do return. else, exit and the program will close.
	while (1)
	{
		std::cout << "please enter a question file path or press 1 to start the game: ";
		std::cin >> input;
		analize();
	}
}

void listener::analize()
{
	if (input == "1")
	{
		quiz.startQuiz();
	}
	else
	{
		parser();
	}
}

void listener::parser()
{
	std::vector<Question> parsedQuestions;
	std::ifstream file(input);
	std::string line;

	if (!file.is_open())
	{
		std::cerr << "Error: Unable to open file " << input << std::endl;
		return;
	}
		
	
	while (file)
	{
		Question currentQuestion;

		std::getline(file, line);
		currentQuestion.setTheQuestion(line);
		
		std::getline(file, line);
		currentQuestion.setCorrectAnswer(line[0]);
		std::getline(file, line);

		while (line != "" && file)	//get answers into answers vector
		{
			currentQuestion.insertAnswer(line);
			std::getline(file, line);
		}
		parsedQuestions.push_back(currentQuestion);
	}
		
	quiz.addQuestionsVector(parsedQuestions);


}
