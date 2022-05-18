#pragma once
#include "Question.h"

using namespace System;

inline Question^ updateNarutoQuestion(int* numberOfQuestion,int* rightAnswerCounter) {
	String^ question;
	String^ answer1;
	String^ answer2;
	String^ answer3;
	String^ answer4;

	String^ wayToImage = "data/images/naruto/" + Convert::ToString(*numberOfQuestion) + ".jpg";

	int rightAnswer;

	switch (*numberOfQuestion) {
	case 1: {
		question =  ". ���� ��� �������� 3-�� ������ ������� ��������?";
		answer1 = "����";
		answer2 = "���������";
		answer3 = "����";
		answer4 = "��������";
		rightAnswer = 3;
		break;
	}
	case 2: {
		question =  ". ����� ������� ��� ������ �������?";
		answer1 = "�����";
		answer2 = "����";
		answer3 = "�������";
		answer4 = "������� ������";
		rightAnswer = 1;
		break;
	}
	case 3: {
		question = ". ��� ������ ����� ����� ���������?";
		answer1 = "���������� ������";
		answer2 = "���������� ���������";
		answer3 = "����� ������";
		answer4 = "�������� ����������";
		rightAnswer = 4;
		break;
	}
	case 4: {
		question =  ". ����� ������� �������� ������?";
		answer1 = "����";
		answer2 = "�����";
		answer3 = "�����";
		answer4 = "������";
		rightAnswer = 3;
		break;
	}
	case 5: {
		question =  ". ��� ������� 2 ��������?";
		answer1 = "������";
		answer2 = "���";
		answer3 = "�������";
		answer4 = "��";
		rightAnswer = 2;
		break;
	}
	case 6: {
		question =  ". ����� ���� ��������� ������ � ������?";
		answer1 = "��������� �� 3 ���";
		answer2 = "����� ������";
		answer3 = "�������� �������";
		answer4 = "��������� �� ������";
		rightAnswer = 4;
		break;
	}
	case 7: {
		question =  ". ���� ������������� �������� �����?";
		answer1 = "�����";
		answer2 = "�����";
		answer3 = "��������";
		answer4 = "������";
		rightAnswer = 2;
		break;
	}
	case 8: {
		question =  ". ���� � ������� �������� ���������� �����?";
		answer1 = "������";
		answer2 = "������";
		answer3 = "�����";
		answer4 = "�����";
		rightAnswer = 1;
		break;
	}
	case 9: {
		question =  ". ��� ����� �����������?";
		answer1 = "������";
		answer2 = "��������";
		answer3 = "������";
		answer4 = "�����";
		rightAnswer = 2;
		break;
	}
	case 10: {
		question = ". ��� �������� ���� � ������� �������� ������?";
		answer1 = "��������";
		answer2 = "��������";
		answer3 = "�������";
		answer4 = "��������";
		rightAnswer = 3;
		break;
	}
	default: {
		answer1 = "9-10 - ����";
		answer2 = "6-8 - ���� �������";
		answer3 = "3-5 - ����";
		answer4 = "0-2 - ������� ��������";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/naruto/Kage.png";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! �� ����������� ����� ����!!!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/naruto/Akazuki.png";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! �� �������� �� ���� �������, � ������, ��� ���������� ����� ������� ����������.";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/naruto/Anbu.png";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� ���-�� �� ������. ����� ���� ������ � ����?.";
		}
		else {
			wayToImage = "data/images/naruto/Student.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� �������! �� ������ ��� ����� ����? ������ ���� ��������� ������� �� ��������.";
		}
		Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
		delete question, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
		return q;
	}

	}
	Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
	q->mixAnswerVariables();
	delete question, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
	return q;
}