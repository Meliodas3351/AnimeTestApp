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
		question = ". Кто является отцом Портгаса Д. Эйса?";
		answer1 = "Эдвард Ньюгейт";
		answer2 = "Гол Д. Роджер";
		answer3 = "Шанкс";
		answer4 = "Портгас Д. Руш";
		rightAnswer = 2;
		break;
	}
	case 2: {
		question = ". Как зовут механика автоброни Эдварда Элрика?";
		answer1 = "Рой Мустанг";
		answer2 = "Винри Рокбелл";
		answer3 = "Энви";
		answer4 = "Алекс Луи Армстронг";
		rightAnswer = 2;
		break;
	}
	case 3: {
		question = ". Как звали джиинчурики 4-хвостого?";
		answer1 = "Фуу";
		answer2 = "Исобу";
		answer3 = "Роуши";
		answer4 = "Ягура";
		rightAnswer = 3;
		break;
	}
	case 4: {
		question = ". Каким образом Римуру Темпест стал князем тьмы?";
		answer1 = "Убил 100 000 чловек";
		answer2 = "Построил свое государство";
		answer3 = "Заслужил воееными подвигами";
		answer4 = "Нарушил главный запрет мира";
		rightAnswer = 1;
		break;
	}
	case 5: {
		question = ". Угадай аниме по скриншоту:";
		answer1 = "Для тебя, Бессмертный";
		answer2 = "Такт Опус. Судьба";
		answer3 = "Когда плачут цикады";
		answer4 = "Клинок, рассекающий демонов";
		rightAnswer = 2;
		break;
	}
	case 6: {
		question = ". Что за персонаж изображен на картинке?";
		answer1 = "Эдвард Элрик";
		answer2 = "Иноске Хашибара";
		answer3 = "Шино Абураме";
		answer4 = "Наофуми Иватани";
		rightAnswer = 4;
		break;
	}
	case 7: {
		question =  ". На каком автомобиле ездил главный герой аниме Initial D?";
		answer1 = "Toyota Celica";
		answer2 = "Mazda RX-7 FD";
		answer3 = "Toyota Trueno AE86";
		answer4 = "Nissan Silvia S13";
		rightAnswer = 3;
		break;
	}
	case 8: {
		question = ". Каким типом дьявольского фрукта обладает Марко?";
		answer1 = "Мифический Зоан";
		answer2 = "Логия";
		answer3 = "Активная парамеция";
		answer4 = "Парамеция смерти";
		rightAnswer = 1;
		break;
	}
	case 9: {
		question =". Кого из основателей Токийской Свастики не хватает на картинке?";
		answer1 = "Баджи";
		answer2 = "Кадзутора";
		answer3 = "Майки";
		answer4 = "Дракен";
		rightAnswer = 3;
		break;
	}
	case 10: {
		question =". Кто является вице-капитаном черных быков?";
		answer1 = "Финрал";
		answer2 = "Гошу";
		answer3 = "Ями";
		answer4 = "Нахт";
		rightAnswer = 4;
		break;
	}
	case 11: {
		question = ". Как называется аниме, где в главных ролях мальчик-дворянин и его демон-слуга?";
		answer1 = "Токийский гуль";
		answer2 = "Баракамон";
		answer3 = "Темный дворецкий";
		answer4 = "Дьявольские возлюбленные";
		rightAnswer = 3;
		break;
		
	}
	case 12: {
		question = ". Какой основной способностью обладал Пикачу?";
		answer1 = "Электрический разряд";
		answer2 = "Эфирный разряд";
		answer3 = "Молниеносные удары";
		answer4 = "Порывы ветра";
		rightAnswer = 1;
		break;
	}
	case 13: {
		question = ". Какая была мечта у главного персонажа аниме Демоны старшей школы? ";
		answer1 = "Стать самым сильным демоном";
		answer2 = "Прожить счастливую жизнь";
		answer3 = "Создать свой гарем";
		answer4 = "Убить своего врага Альбиона";
		rightAnswer = 3;
		break;
	}
	case 14: {
		question = ". Как называется кафе из аниме Врата Штейна?";
		answer1 = "Nya Queen";
		answer2 = "Maid Cafe";
		answer3 = "Nya Cafe";
		answer4 = "May Queen";
		rightAnswer = 4;
		break;
	}
	case 15: {
		question = ". Как Сенку получал азотную кислоту?";
		answer1 = "Из капельников пещер";
		answer2 = "Из помета летучей мыши";
		answer3 = "Из древесной смолы";
		answer4 = "Из перетертых ракушек";
		rightAnswer = 2;
		break;
	}
	case 16: {
		question = ". Кто из заповедей изображен на картинке?";
		answer1 = "Дерриер";
		answer2 = "Монспиет";
		answer3 = "Мерасцилла";
		answer4 = "Глоксиния";
		rightAnswer = 3;
		break;
	}
	case 17: {
		question = ". Кто не являлся владельцем атакующего титана?";
		answer1 = "Эрен Йегер";
		answer2 = "Эрен Крюгер";
		answer3 = "Гриша Йегер";
		answer4 = "Хистория Рейсс";
		rightAnswer = 4;
		break;
	}
	case 18: {
		question = ". Как зовут данного персонажа из аниме Дороро?";
		answer1 = "Дороро";
		answer2 = "Хяккимару";
		answer3 = "Тахомару";
		answer4 = "Дайго";
		rightAnswer = 2;
		break;
	}
	case 19: {
		question = ". Что за аниме на картинке?";
		answer1 = "Обещанный неверленд";
		answer2 = "Ванпачмен";
		answer3 = "Рандеву с жизнью";
		answer4 = "Корона грешника";
		rightAnswer = 1;
		break;
	}
	case 20: {
		question = ". Кто из столпов изображен на картинке?";
		answer1 = "Ренгоку Кеджуро";
		answer2 = "Мицури Канроджи";
		answer3 = "Игуро Обанай";
		answer4 = "Санеми Шинадзугава";
		rightAnswer = 3;
		break;
	}
	default: {
		answer1 = "9-10 - Гуру";
		answer2 = "6-8 - Мастер";
		answer3 = "3-5 - Любитель";
		answer4 = "0-2 - Начинающий";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/common/Guru.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Ты действительно ГУРУ!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/common/Master.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Ты действительно настоящий мастер!";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/common/Amateur.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ну что-то ты знаешь. Но знания стоит подтянуть.";
		}
		else {
			wayToImage = "data/images/common/Begining.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ты уверен что попал туда? Просто твой результат говорит об обратном.";
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