#include "logic.h"

double find_avg_mark(int marks[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += marks[i];
	}

	return sum / length;
}

string get_the_best_class(int first_class[],int second_class[], int third_class[], int length) {
	double first_avg = find_avg_mark(first_class, length);
	double second_avg = find_avg_mark(second_class, length);
	double third_avg = find_avg_mark(third_class, length);

	string msg;

	if (first_avg > second_avg && first_avg > third_avg) {
		msg = "first";
	}
	else if (second_avg > first_avg && second_avg > third_avg) {
		msg = "second";
	}
	else {
		msg = "third";
	}

	return msg;
}