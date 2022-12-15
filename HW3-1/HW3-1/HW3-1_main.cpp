// HW3-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "HW3_1.h"





int main()
{

	
	queue_1.push(1);

	queue_1.push(2);

	queue_1.push(3);

	queue_1.push(4);

	queue_1.push(5);

	queue_1.push(6);

	queue_1.push(7);

	
	cout << "Original front:" << "\n";
	cout << queue_1.front() << "\n";
	cout << "Original back:" << "\n";
	cout << queue_1.back() << "\n\n";
	cout << "After move_to_rear function:" << "\n\n";
	move_to_rear();
	cout << "New front:" << "\n";
	cout << queue_1.front() << "\n";
	cout << "New back" << "\n";
	cout << queue_1.back() << "\n";

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
