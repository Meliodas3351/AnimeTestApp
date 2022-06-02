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
		question =  ". Кто был личным призывом 3-го Хокаге?";
		answer1 = "Баку";
		answer2 = "Гамабунта";
		answer3 = "Энма";
		answer4 = "Нингамее";
		rightAnswer = 3;
		break;
	}
	case 2: {
		question =  ". Какая любимая еда Наруто Узумаки?";
		answer1 = "Рамен";
		answer2 = "Суши";
		answer3 = "Такояки";
		answer4 = "Рисовые шарики";
		rightAnswer = 1;
		break;
	}
	case 3: {
		question = ". Что больше всего желал Орочимару?";
		answer1 = "Уничтожить Коноху";
		answer2 = "Воскресить родителей";
		answer3 = "Стать Хокаге";
		answer4 = "Получить бессмертие";
		rightAnswer = 4;
		break;
	}
	case 4: {
		question =  ". Какой стихией обладает Наруто?";
		answer1 = "Вода";
		answer2 = "Огонь";
		answer3 = "Ветер";
		answer4 = "Молния";
		rightAnswer = 3;
		break;
	}
	case 5: {
		question =  ". Кто являлся 2 Цучикаге?";
		answer1 = "Ооноки";
		answer2 = "Муу";
		answer3 = "Генгецу";
		answer4 = "Эй";
		rightAnswer = 2;
		break;
	}
	case 6: {
		question =  ". Какой спор заключили Наруто и Цунаде?";
		answer1 = "Рассенган за 3 дня";
		answer2 = "Стать Хокаге";
		answer3 = "Победить Джирайю";
		answer4 = "Рассенган за неделю";
		rightAnswer = 4;
		break;
	}
	case 7: {
		question =  ". Чьей реинкарнацией является Саске?";
		answer1 = "Ашура";
		answer2 = "Индра";
		answer3 = "Хагоромо";
		answer4 = "Мадара";
		rightAnswer = 2;
		break;
	}
	case 8: {
		question =  ". Кого в Акацуки называют бесхвостым биджу?";
		answer1 = "Кисаме";
		answer2 = "Какузу";
		answer3 = "Хидан";
		answer4 = "Конан";
		rightAnswer = 1;
		break;
	}
	case 9: {
		question =  ". Как зовут двухвостого?";
		answer1 = "Шукаку";
		answer2 = "Мататаби";
		answer3 = "Чоумей";
		answer4 = "Исобу";
		rightAnswer = 2;
		break;
	}
	case 10: {
		question = ". Как называют Каге в Деревне Скрытого Облака?";
		answer1 = "Казекаге";
		answer2 = "Мизукаге";
		answer3 = "Райкаге";
		answer4 = "Цучикаге";
		rightAnswer = 3;
		break;
	}
	case 11: {
		question = ". Кто уничтожил весь клан учих?";
		answer1 = "Обито";
		answer2 = "Итачи";
		answer3 = "Итачи и Обито";
		answer4 = "Данзо";
		rightAnswer = 3;
		break;
	}
	case 12: {
		question = ". Кто убил Шисуи?";
		answer1 = "Шисуи";
		answer2 = "Данзо";
		answer3 = "Итачи";
		answer4 = "Корень Анбу";
		rightAnswer = 1;
		break;
	}
	case 13: {
		question = ". Как называется первая книга, которую написал Джирайя?";
		answer1 = "Приди-приди рай";
		answer2 = "Приди-приди тактика";
		answer3 = "Сказание о бесстрашном шиноби";
		answer4 = "Как использовать чакру для чайников";
		rightAnswer = 3;
		break;
	}
	case 14: {
		question = ". Как погибла Рин Нохара?";
		answer1 = "Попала под камень";
		answer2 = "Попала под чидори Какаши";
		answer3 = "Ее убил Белый Зецу";
		answer4 = "Ее убил Черный Зецу";
		rightAnswer = 2;
		break;
	}
	case 15: {
		question = ". Кто изображен на картинке?";
		answer1 = "Дейдара и Сасори";
		answer2 = "Хидан и Яхико";
		answer3 = "Яхико и Конан";
		answer4 = "Какузу и Хидан";
		rightAnswer = 4;
		break;
	}
	case 16: {
		question = ". Кто из мечников тумана овладел 7 мечами?";
		answer1 = "Мангецу Хозуки";
		answer2 = "Фугуки Суйказан";
		answer3 = "Джузо Бива";
		answer4 = "Забуза Момочи";
		rightAnswer = 1;
		break;
	}
	case 17: {
		question = ". Кто автор техники нечестивого воскрешения?";
		answer1 = "Хаширама";
		answer2 = "Тобирама";
		answer3 = "Кабуто";
		answer4 = "Орочимару";
		rightAnswer = 2;
		break;
	}
	case 18: {
		question = ". Какая способность у правого глаза Итачи?";
		answer1 = "Цукуеми";
		answer2 = "Аматерасу";
		answer3 = "Котоамацуками";
		answer4 = "Камуи";
		rightAnswer = 2;
		break;
	}
	case 19: {
		question = ". Как Мадара получил Ринеган?";
		answer1 = "Пересадил клетки Хаширамы";
		answer2 = "Пробудил";
		answer3 = "Получил от Черного Зецу";
		answer4 = "Неизвестно";
		rightAnswer = 1;
		break;
	}
	case 20: {
		question = ". Какая любимая фраза Дейдары?";
		answer1 = "Друга нельзя купить, но его можно продать";
		answer2 = "Искусство это взрыв!";
		answer3 = "Я стану Хокаге";
		answer4 = "Даттебане";
		rightAnswer = 2;
		break;
	}
	default: {
		answer1 = "9-10 - Каге";
		answer2 = "6-8 - Член Акацуки";
		answer3 = "3-5 - Анбу";
		answer4 = "0-2 - Студент академии";
		rightAnswer = NULL;
		if (*rightAnswerCounter > 8) {
			wayToImage = "data/images/naruto/Kage.png";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Да здравтсвует новый Каге!!!";
		}
		else if (*rightAnswerCounter > 5) {
			wayToImage = "data/images/naruto/Akazuki.png";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + "! Ты случайно не член Акацуки, я слышал, там собираются самые опасные преступник.";
		}
		else if (*rightAnswerCounter > 2) {
			wayToImage = "data/images/naruto/Anbu.png";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ну что-то ты знаешь. Может тебя примут в Анбу?.";
		}
		else {
			wayToImage = "data/images/naruto/Student.jpg";
			question = "Твой результат - " + Convert::ToString(*rightAnswerCounter) + ". Ты СТУДЕНТ! Ты уверен что попал туда? Просто твой результат говорит об обратном.";
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