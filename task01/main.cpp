#include "logic.h"

int main() {

	int classes[DEFAULT_SIZE][DEFAULT_SIZE];

	int number_of_classes;
	int number_of_students;

	cout << "Enter number of classes: ";
	cin >> number_of_classes;

	cout << "Enter number of students: ";
	cin >> number_of_students;


	int first_class[]{ 2,2,2,2,2,2,2,2,2,2 };
	int second_class[]{ 6,5,4,7,6,5,4,8,9,5 };
	int third_class[]{ 2,2,2,2,2,2,2,2,2,2};

	cout << "The best class is " << get_the_best_class(first_class ,second_class , third_class, DEFAULT_SIZE);

	return 0;
}