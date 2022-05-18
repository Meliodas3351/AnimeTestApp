#pragma once
#include "Question.h"

using namespace System;

inline Question^ updateCommonQuestion(int* numberOfQuestion,int* rightAnswerCounter) {
	String^ answer1;
	String^ answer2;
	String^ answer3;
	String^ answer4;
	String^ question;
	

	String^ wayToImage = "data/images/common/" + Convert::ToString(*numberOfQuestion) + ".jpg";

	int rightAnswer;
	switch (*numberOfQuestion) {
	case 1: {
		question = ". ��� �������� ����� �������� �. ����?";
		answer1 = "������ �������";
		answer2 = "��� �. ������";
		answer3 = "�����";
		answer4 = "������� �. ���";
		rightAnswer = 2;
		break;
	}
	case 2: {
		question = ". ��� ����� �������� ��������� ������� ������?";
		answer1 = "��� �������";
		answer2 = "����� �������";
		answer3 = "����";
		answer4 = "����� ��� ���������";
		rightAnswer = 2;
		break;
	}
	case 3: {
		question = ". ��� ����� ����������� 4-��������?";
		answer1 = "���";
		answer2 = "�����";
		answer3 = "�����";
		answer4 = "�����";
		rightAnswer = 3;
		break;
	}
	case 4: {
		question = ". ����� ������� ������ ������� ���� ������ ����?";
		answer1 = "���� 100 000 ������";
		answer2 = "�������� ���� �����������";
		answer3 = "�������� �������� ���������";
		answer4 = "������� ������� ������ ����";
		rightAnswer = 1;
		break;
	}
	case 5: {
		question = ". ������ ����� �� ���������:";
		answer1 = "��� ����, �����������";
		answer2 = "���� ����. ������";
		answer3 = "����� ������ ������";
		answer4 = "������, ����������� �������";
		rightAnswer = 2;
		break;
	}
	case 6: {
		question = ". ��� �� �������� ��������� �� ��������?";
		answer1 = "������ �����";
		answer2 = "������ ��������";
		answer3 = "���� �������";
		answer4 = "������� �������";
		rightAnswer = 4;
		break;
	}
	case 7: {
		question =  ". �� ����� ���������� ����� ������� ����� ����� Initial D?";
		answer1 = "Toyota Celica";
		answer2 = "Mazda RX-7 FD";
		answer3 = "Toyota Trueno AE86";
		answer4 = "Nissan Silvia S13";
		rightAnswer = 3;
		break;
	}
	case 8: {
		question =". ����� ����� ������������ ������ �������� �����?";
		answer1 = "���������� ����";
		answer2 = "�����";
		answer3 = "�������� ���������";
		answer4 = "��������� ������";
		rightAnswer = 1;
		break;
	}
	case 9: {
		question =". ���� �� ����������� ��������� �������� �� ������� �� ��������?";
		answer1 = "�����";
		answer2 = "���������";
		answer3 = "�����";
		answer4 = "������";
		rightAnswer = 3;
		break;
	}
	case 10: {
		question =". ��� �������� ����-��������� ������ �����?";
		answer1 = "������";
		answer2 = "����";
		answer3 = "���";
		answer4 = "����";
		rightAnswer = 4;
		break;
	}
	default: {
		answer1 = "9-10 - ����";
		answer2 = "6-8 - ������";
		answer3 = "3-5 - ��������";
		answer4 = "0-2 - ����������";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/common/Guru.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! �� ������������� ����!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/common/Master.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! �� ������������� ��������� ������!";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/common/Amateur.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� ���-�� �� ������. �� ������ ����� ���������.";
		}
		else {
			wayToImage = "data/images/common/Begining.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� ������ ��� ����� ����? ������ ���� ��������� ������� �� ��������.";
		}
		Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
		return q;
	}
		   
	}
	Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
	delete question, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
	q->mixAnswerVariables();
	return q;
}