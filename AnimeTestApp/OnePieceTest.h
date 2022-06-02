#pragma once
#include "Question.h"

using namespace System;

inline Question^ updateOnePieceQuestion(int *numberOfQuestion,int *rightAnswerCounter) {
	String^ question;
	String^ answer1;
	String^ answer2;
	String^ answer3;
	String^ answer4;

	String^ wayToImage = "data/images/onePiece/" + Convert::ToString(*numberOfQuestion) + ".jpg";

	int rightAnswer;

	switch (*numberOfQuestion) {
	case 1: {
		question =  ". � ����� ���� ����� ������� ���������� 2-�� ���?";
		answer1 = "������ ����";
		answer2 = "������ �����";
		answer3 = "���������";
		answer4 = "��������";
		rightAnswer = 2;
		break;
	}
	case 2: {
		question =  ". ��� ������� �� ������� ��������� �������� ������?";
		answer1 = "�������";
		answer2 = "������";
		answer3 = "������";
		answer4 = "�����";
		rightAnswer = 4;
		break;
	}
	case 3: {
		question =  ". ��� ���������� ���� ������� �������?";
		answer1 = "�����";
		answer2 = "����";
		answer3 = "�����";
		answer4 = "�����";
		rightAnswer = 1;
		break;
	}
	case 4: {
		question =  ". �� ���� ����� ������� ���������� �����?";
		answer1 = "�� ����� (����)";
		answer2 = "�� ����";
		answer3 = "�����";
		answer4 = "�� ������";
		rightAnswer = 4;
		break;
	}
	case 5: {
		question = ". ��� ������������� � ������� ������� ������ ���������?";
		answer1 = "���� ���� ������";
		answer2 = "���� �����";
		answer3 = "������";
		answer4 = "�������";
		rightAnswer = 1;
		break;
	}
	case 6: {
		question =  ". ����� ������ ������������ ������ ������� ������?";
		answer1 = "��� ���";
		answer2 = "���� ����";
		answer3 = "���� ����";
		answer4 = "���� ����";
		rightAnswer = 2;
		break;
	}
	case 7: {
		question = ". ��� �������� ����� � ���� �������?";
		answer1 = "�����";
		answer2 = "����������";
		answer3 = "������� ������";
		answer4 = "���������";
		rightAnswer = 1;
		break;
	}
	case 8: {
		question = ". ����� �������� ����� ������� ������?";
		answer1 = "������� �� �������";
		answer2 = "��� �������";
		answer3 = "��������� �����";
		answer4 = "���������� �����";
		rightAnswer = 3;
		break;
	}
	case 9: {
		question =  ". ��� ����� ������ � ����� ��� ���?";
		answer1 = "������";
		answer2 = "������";
		answer3 = "��������";
		answer4 = "����";
		rightAnswer = 4;
		break;
	}
	case 10: {
		question =  ". ����� ������� � ����� ���� ������� ����� ������� �� 1 500 000 000 �����?";
		answer1 = "������ �����";
		answer2 = "������ ����";
		answer3 = "����� ����";
		answer4 = "�������� ������";
		rightAnswer = 4;
		break;
	}
	case 11: {
		question = ". ��������� ����� ������� �������� ���������� ��?";
		answer1 = "������ �������";
		answer2 = "������ ������";
		answer3 = "������ ���������� �����";
		answer4 = "������ ������";
		rightAnswer = 2;
		break;
	}
	case 12: {
		question = ". � ���� � ������� ������� ��������?";
		answer1 = "������ ������� �������";
		answer2 = "������ �����";
		answer3 = "������ ������������";
		answer4 = "������ �������";
		rightAnswer = 1;
		break;
	}
	case 13: {
		question = ". ��� ��� ��� ��� � ������ ������ ����?";
		answer1 = "���";
		answer2 = "����������";
		answer3 = "����";
		answer4 = "�����";
		rightAnswer = 1;
		break;
	}
	case 14: {
		question = ". ������������� ����� ����������� ��� ���������?";
		answer1 = "CP 0";
		answer2 = "CP 9";
		answer3 = "����� �����";
		answer4 = "������ 66";
		rightAnswer = 3;
		break;
	}
	case 15: {
		question = ". ��� �� ���������� �������� ������� ���� ����?";
		answer1 = "����� ���";
		answer2 = "������� �����";
		answer3 = "� �����";
		answer4 = "���������� ��";
		rightAnswer = 3;
		break;
	}
	default: {
		answer1 = "9-10 - ������ �������";
		answer2 = "6-8 - �����";
		answer3 = "3-5 - ����������";
		answer4 = "0-2 - �������";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/onePiece/PirateKing.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! �� ����� ��������� ������ �������!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/onePiece/Yonko.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + "! ��� ������� ���������, ��� �� ������� ������ �����!";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/onePiece/WorstGeneration.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� ���-�� �� ������. �� ��� �������, ��� �� �� ������� ���������.";
		}
		else {
			wayToImage = "data/images/onePiece/Pirate.jpg";
			question = "���� ��������� - " + Convert::ToString(*rightAnswerCounter) + ". �� ������ ��� ����� ����? ������ ���� ��������� ������� �� ��������, �������.";
		}
		Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
		return q; }
	}
	Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
	q->mixAnswerVariables();
	delete question, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
	return q;
}