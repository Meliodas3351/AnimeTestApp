#pragma once
#include <cmath>
#include <time.h>

ref class RandomQuestionsSequenseGenerator
{
private:
	//int* actionSequence = new int[10];
	int* sequence = new int[10];
public:
	RandomQuestionsSequenseGenerator() {
		for (int k = 0; k < 10; k++) {
			sequence[k] = k + 1;
		}
	}
	~RandomQuestionsSequenseGenerator()
	{
		delete[] sequence;
	}
	void changeSequence();
	int getSequenceMember(int* index);
	void finalize();
};

