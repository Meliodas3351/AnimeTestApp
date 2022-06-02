#include "RandomQuestionsSequenseGenerator.h"

void RandomQuestionsSequenseGenerator::resetSequence()
{
    for (int k = 0; k < sequenceLength; k++) {
        sequence[k] = k + 1;
    }
}

void RandomQuestionsSequenseGenerator::changeSequence()
{
    srand(time(NULL));
    int firstIndex, secondIndex, intermediary;
    for (int k = 0; k < 40; k++) {
        firstIndex = rand() % this->countOfShablonsInActionTest;
        secondIndex = rand() % this->countOfShablonsInActionTest;
        intermediary = sequence[firstIndex];
        sequence[firstIndex] = sequence[secondIndex];
        sequence[secondIndex] = intermediary;
    }
    for (int k = 0; k < 10; k++) {
        actionSequence[k] = sequence[k];
    }
    actionSequence[10] = 0;
}

int RandomQuestionsSequenseGenerator::getSequenceMember(int *index)
{
    return actionSequence[*index];
}

void RandomQuestionsSequenseGenerator::finalize()
{
    delete[] sequence;
    //delete[] actionSequence;
}

void RandomQuestionsSequenseGenerator::setCountOfShablons(int value)
{
    this->countOfShablonsInActionTest = value;
}
