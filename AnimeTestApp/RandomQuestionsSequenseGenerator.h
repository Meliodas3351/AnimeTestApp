#pragma once
#include <cmath>
#include <time.h>

ref class RandomQuestionsSequenseGenerator
{
private:
	int sequenceLength = 30;
	int countOfShablonsInActionTest = 20;
	int* actionSequence = new int[11];
	int* sequence = new int[sequenceLength];
public:
	RandomQuestionsSequenseGenerator() {
		for (int k = 0; k < sequenceLength; k++) {
			sequence[k] = k + 1;
		}
	}
	~RandomQuestionsSequenseGenerator()
	{
		delete[] sequence;
	}
	void resetSequence();
	void changeSequence();
	int getSequenceMember(int* index);
	void finalize();
	void setCountOfShablons(int value);
};