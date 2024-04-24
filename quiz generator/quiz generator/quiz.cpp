#include "quiz.h"

void Quiz::startQuiz()
{	
	std::vector<int> randomizer;
	float grade = 0;

	std::cout << "=====================================\n";
	std::cout << "||         Welcome to the         ||\n";
	std::cout << "||             QUIZ!              ||\n";
	std::cout << "=====================================\n\n";

	setNumOfQuestions();

	for (int i = 0; i < dataBase.size(); ++i)
	{
		randomizer.push_back(i);
	}
	std::random_device rd;
	std::mt19937 g(rd());

	std::shuffle(randomizer.begin(), randomizer.end(), g);

	for (int i = 0; i < numOfQuestions; ++i)
	{
		int choice = 0;
		std::cout << "Question number " << i+1 << "\n" << dataBase[randomizer[i]].getQuestion() << std::endl;
		dataBase[randomizer[i]].printAnswers();
		std::cout << "Enter your answer number: " << std::endl;
		std::cin >> choice;
		if (choice == dataBase[randomizer[i]].getCorrectNumber())
		{
			std::cout << "You are correct! ";
			++grade;
		}
		else
		{
			std::cout << "Your answer is incorrect. ";
		}
		
		std::cout << "The answer is: " << dataBase[randomizer[i]].getCorrectAnswer() << std::endl;
	}

	grade /= numOfQuestions;
	grade *= 100;

	std::cout << "The quiz is over. Your grade is: " << grade << std::endl;

}

void Quiz::setNumOfQuestions()
{
	std::cout << "Enter the desired number of questions: ";
	std::cin >> numOfQuestions;
}

void Quiz::addQuestionsVector(std::vector <Question> questionVector)
{
	dataBase.insert(dataBase.end(), questionVector.begin(), questionVector.end());
}
