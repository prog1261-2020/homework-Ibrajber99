#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <tchar.h>
#include <conio.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include <time.h>
#include <vector>
#include <cmath>
#include <fstream>
#include <memory>
#include <cstring>
#include <locale> 
#include <sstream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <ostream>
#include<fstream>
#include <windows.graphics.h>
#include <istream>
#include <utility>
#include <array>
#include<set>
#include<map>
#include<list>
#include<iterator>
#include<forward_list>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <numeric>
#include <thread>
#include <bitset>
#include<unordered_set>
#include <deque>
#include <cstdlib>
#include <cstdio>
#include <clocale>
#include <ctime>
#include <cwchar>
#include <atomic>
#include <future>
#include "WorkQueue.h"


std::atomic<bool> make_work(false);
WorkQueue jobs;
std::mutex cout_mutex;

void producer() {
	while (make_work == false) {
		make_work = true;
		jobs.push(rand() % 100);
		cout_mutex.lock();
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
		cout_mutex.unlock();
		
	} 
}

void consumer(int id) {

	while (make_work) {
		make_work = false;

		if (jobs.size() == 0) {
			std::this_thread::yield();
		}
		else {
			int n = jobs.pop();
			int sz = jobs.size();
			cout_mutex.lock();
			std::cout << sz << " : " << id << " processed" << n << std::endl;
			cout_mutex.unlock();
		}
	}
}

int main() {
	srand(time(0));
	std::vector<std::thread> producers;
	std::vector<std::thread> consumers;

	for (int i = 0; i < 9; ++i) {
		producers.push_back(std::thread(producer));
	}

	for (int i = 0; i < 35; ++i) {
		consumers.push_back(std::thread(consumer, i));
	}
	if (jobs.size() == 0) {

		for (auto& t : producers) {
			t.join();
		}
		for (auto& t : consumers) {
			t.join();
		}
	}
}



//std::atomic<bool> ready_set_go(false);
//std::mutex m;
//
//void raceTo1m(int id) {
//
//	
//	while (!ready_set_go) {
//		std::cout << ".";
//		std::this_thread::yield();
//
//	}
//
//	for (volatile int i{ 0 }; i < 1000000; i++) {};
//	std::lock_guard<std::mutex> lk(m);
//	//m.lock();
//
//	std::cout << "Thread " <<id <<" Actual ID " << std::this_thread::get_id() << std::endl;
//
//	//m.unlock();
//}
//
////std::list<int>jobs;
//
//
//int main() {
//	
//
//	int c = std::thread::hardware_concurrency();
//	std::cout << c;
//
//
//	std::vector<std::thread> threads;
//	
//	std::cout << "The Race is About to start\n";
//	
//	for (int i = 0; i < 10; i++) {
//		threads.push_back(std::thread(raceTo1m,i));
//	}
//	std::this_thread::sleep_for(std::chrono::milliseconds(10));
//	
//	std::cout << "GO!\n";
//	ready_set_go = true;
//	
//	for (auto& i : threads) {
//		i.join();
//		std::cout << "\n\n";
//	}
//}