#include "logic.h"

double find_avg_mark(int marks[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += marks[i];
	}

	return sum / length;
}

string get_the_best_class(int classA[],int classB[], int classC[], int length) {
	string best_class = "class A";

	int A = find_avg_mark(classA, length);
	int B = find_avg_mark(classB, length);
	int C = find_avg_mark(classC, length);


	int count = 3;
	double avr[]{ A,B,C };
	string classes[]{ "A","B","C"};

	int index = 0;
	string cl = classes[0];
	for (int i = 1; i < count; i++)
	{
		if (avr[index] < avr[i]) {
			index = i;
			cl = classes[i];

		}
	}
	return "class " + cl;
}