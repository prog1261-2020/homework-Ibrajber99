#pragma once
#include<list>
#include<mutex>
#include<future>


class WorkQueue
{
public:
	WorkQueue();
	void push(int n);
	int pop();
	int size();


private:
	std::list<int>jobs;
	std::mutex mtx;

};

