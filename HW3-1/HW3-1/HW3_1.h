#pragma once
#include <iostream> 
#include <queue> 
using namespace std;

queue<int> queue_1; // initializes queue

void move_to_rear() { // function to move first from queue to back
	int num = queue_1.front(); // saves value of front number as int
	queue_1.pop(); // pops front value
	queue_1.push(num); // adds saved front value to the back of queue
}