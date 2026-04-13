#include "logic.h"

int main() {
	int first_class[]{ 2,2,2,2,2,2,2,2,2,2 };
	int second_class[]{ 6,5,4,7,6,5,4,8,9,5 };
	int third_class[]{ 2,2,2,2,2,2,2,2,2,2};

	cout << "The best class is " << get_the_best_class(first_class ,second_class , third_class, DEFAULT_SIZE);

	return 0;
}