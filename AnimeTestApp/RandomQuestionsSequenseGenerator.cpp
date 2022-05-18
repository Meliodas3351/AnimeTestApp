#include "RandomQuestionsSequenseGenerator.h"

void RandomQuestionsSequenseGenerator::changeSequence()
{
    srand(time(NULL));
    int firstIndex, secondIndex, intermediary;
    for (int k = 0; k < 20; k++) {
        firstIndex = rand() % 10;
        secondIndex = rand() % 10;
        intermediary = sequence[firstIndex];
        sequence[firstIndex] = sequence[secondIndex];
        sequence[secondIndex] = intermediary;
    }
    sequence[10] = 0;
}

int RandomQuestionsSequenseGenerator::getSequenceMember(int *index)
{
    return sequence[*index];
}

void RandomQuestionsSequenseGenerator::finalize()
{
    delete[] sequence;
    //delete[] actionSequence;
}
