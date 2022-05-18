#include "Question.h"
#include <time.h>
#include <cmath>

String^ Question::getAnswer1()
{
	return this->answer1;
}

String^ Question::getAnswer2()
{
	return this->answer2;
}

String^ Question::getAnswer3()
{
	return this->answer3;

}

String^ Question::getAnswer4()
{
	return this->answer4;

}

String^ Question::getQuestionCondition()
{
	return this->questionCondition;

}

int Question::getRightAnswer()
{
	return this->rightAnswer;
}

String^ Question::getImage()
{
	return this->wayToImage;
}

void Question::mixAnswerVariables()
{
	srand(time(NULL));
	int first, second;
	String^ middle;
	for (int i = 0; i < 5; i++) {
		first = rand() % 4 + 1;
		second = rand() % 4 + 1;
		if (first == this->rightAnswer) {
			this->rightAnswer = second;
		}
		else if (second == this->rightAnswer) {
			this->rightAnswer = first;
		}
		switch (first) {
		case 1: {
			switch (second) {
			case 1: {
				break;
			}
			case 2: {
				middle = answer1;
				answer1 = answer2;
				answer2 = middle;
				break;
			}
			case 3: {
				middle = answer1;
				answer1 = answer3;
				answer3 = middle;
				break;
			}
			case 4: {
				middle = answer1;
				answer1 = answer4;
				answer4 = middle;
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		case 2: {
			switch (second) {
			case 1: {
				middle = answer1;
				answer1 = answer2;
				answer2 = middle;
				break;
			}
			case 2: {

				break;
			}
			case 3: {
				middle = answer2;
				answer2 = answer3;
				answer3 = middle;
				break;
			}
			case 4: {
				middle = answer2;
				answer2 = answer4;
				answer4 = middle;
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		case 3: {
			switch (second) {
			case 1: {
				middle = answer1;
				answer1 = answer3;
				answer3 = middle;
				break;
			}
			case 2: {
				middle = answer3;
				answer3 = answer2;
				answer2 = middle;
				break;
			}
			case 3: {
				break;
			}
			case 4: {
				middle = answer4;
				answer4 = answer3;
				answer3 = middle;
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		case 4: {
			switch (second) {
			case 1: {
				middle = answer1;
				answer1 = answer4;
				answer4 = middle;
				break;
			}
			case 2: {
				middle = answer4;
				answer4 = answer2;
				answer2 = middle;
				break;
			}
			case 3: {
				middle = answer4;
				answer4 = answer3;
				answer3 = middle;
				break;
			}
			case 4: {
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		default: {
			break;
		}
		}
	}
}