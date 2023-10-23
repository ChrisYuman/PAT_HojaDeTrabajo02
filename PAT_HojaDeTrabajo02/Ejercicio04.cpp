#include "Ejercicio04.h"

FrontMiddleBackQueue::FrontMiddleBackQueue()
{
}

void FrontMiddleBackQueue::pushFront(int value)
{
	queue.push_front(value);

}

void FrontMiddleBackQueue::pushMiddle(int value)
{
	int numero = queue.size();
	int mitad = numero / 2;
	queue.insert(queue.begin() + mitad, value);
}

void FrontMiddleBackQueue::pushBack(int value)
{
	queue.push_back(value);

}

int FrontMiddleBackQueue::popFront()
{
	if (queue.empty()) {
		return -1;
	}
	int front = queue.front();
	queue.pop_front();
	return front;
}

int FrontMiddleBackQueue::popMiddle()
{
	if (queue.empty()) {
		return -1;
	}
	int numero = queue.size();
	int mitad = (numero - 1) / 2;
	int mitavalor = queue[mitad];
	queue.erase(queue.begin() + mitad);
	return mitavalor;
}

int FrontMiddleBackQueue::popBack()
{
	if (queue.empty()) {
		return -1;
	}
	int back = queue.back();
	queue.pop_back();
	return back;
}
