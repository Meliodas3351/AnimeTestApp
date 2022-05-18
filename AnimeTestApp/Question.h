#pragma once


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class Question
{
private:
	String^ questionCondition;
	String^ answer1;
	String^ answer2;
	String^ answer3;
	String^ answer4;

	int rightAnswer;

	String^ wayToImage;

public:
	Question(String^* q,String^* a1, String^* a2, String^* a3, String^* a4, int* right,String^* wayToImage) {
		this->answer1 = *a1;
		this->answer2 = *a2;
		this->answer3 = *a3;
		this->answer4 = *a4;
		this->questionCondition = *q;
		this->rightAnswer = *right;
		this-> wayToImage= *wayToImage;
	}
	~Question()
	{
		delete questionCondition, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
	}

	String^ getAnswer1();
	String^ getAnswer2();
	String^ getAnswer3();
	String^ getAnswer4();
	String^ getQuestionCondition();
	int getRightAnswer();
	String^ getImage();
	void mixAnswerVariables();
};

