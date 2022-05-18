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
		question =  ". В какой арке Луффи впервые использует 2-ой гир?";
		answer1 = "Арлонг Парк";
		answer2 = "Энниес Лобби";
		answer3 = "Маринфорд";
		answer4 = "Алабаста";
		rightAnswer = 2;
		break;
	}
	case 2: {
		question =  ". Кто никогда не являлся Адмиралом морского дозора?";
		answer1 = "Аокидзи";
		answer2 = "Кизару";
		answer3 = "Акайну";
		answer4 = "Кайдо";
		rightAnswer = 4;
		break;
	}
	case 3: {
		question =  ". Как называется этот корабль мугивар?";
		answer1 = "Санни";
		answer2 = "Мери";
		answer3 = "Гекко";
		answer4 = "Ранни";
		rightAnswer = 1;
		break;
	}
	case 4: {
		question =  ". От кого Луффи получил соломенную шляпу?";
		answer1 = "От Гарпа (деда)";
		answer2 = "От Эйса";
		answer3 = "Нашел";
		answer4 = "От Шанкса";
		rightAnswer = 4;
		break;
	}
	case 5: {
		question = ". Кто присоединился к команде мугивар раньше остальных?";
		answer1 = "Тони Тони Чоппер";
		answer2 = "Нико Робин";
		answer3 = "Фрэнки";
		answer4 = "Джимбей";
		rightAnswer = 1;
		break;
	}
	case 6: {
		question =  ". Силой какого дьявольского фрукта обладал Белоус?";
		answer1 = "Опе Опе";
		answer2 = "Гура Гура";
		answer3 = "Бари Бари";
		answer4 = "Пета Пета";
		rightAnswer = 2;
		break;
	}
	case 7: {
		question = ". Кем является Шанкс в мире пиратов?";
		answer1 = "Йонко";
		answer2 = "Сверхновый";
		answer3 = "Адмирал дозора";
		answer4 = "Шичибукай";
		rightAnswer = 1;
		break;
	}
	case 8: {
		question = ". Какое прозвище носит Дракуль Михоук?";
		answer1 = "Охотник на пиратов";
		answer2 = "Меч дьявола";
		answer3 = "Соколиные глаза";
		answer4 = "Ястребиные глаза";
		rightAnswer = 3;
		break;
	}
	case 9: {
		question =  ". Что такое мантра в аниме Ван Пис?";
		answer1 = "Валюта";
		answer2 = "Остров";
		answer3 = "Артефакт";
		answer4 = "Воля";
		rightAnswer = 4;
		break;
	}
	case 10: {
		question =  ". После участия в какой арке награда Луффи выросла до 1 500 000 000 Белли?";
		answer1 = "Энниес Лобби";
		answer2 = "Страна Вано";
		answer3 = "Дресс Роза";
		answer4 = "Пирожный остров";
		rightAnswer = 4;
		break;
	}
	default: {
		answer1 = "9-10 - Король пиратов";
		answer2 = "6-8 - Йонко";
		answer3 = "3-5 - Сверхновый";
		answer4 = "0-2 - Пиратик";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/onePiece/PirateKing.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Ты самый настоящий КОРОЛЬ ПИРАТОВ!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/onePiece/Yonko.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Это отлично доказывет, что ты достоин звания Йонко!";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/onePiece/WorstGeneration.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ну что-то ты знаешь. Но мне кажется, что ты из худшего поколения.";
		}
		else {
			wayToImage = "data/images/onePiece/Pirate.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ты уверен что попал туда? Просто твой результат говорит об обратном, ПИРАТИК.";
		}
		Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
		return q; }
	}
	Question^ q = gcnew Question(&question, &answer1, &answer2, &answer3, &answer4, &rightAnswer, &wayToImage);
	q->mixAnswerVariables();
	delete question, answer1, answer2, answer3, answer4, rightAnswer, wayToImage;
	return q;
}