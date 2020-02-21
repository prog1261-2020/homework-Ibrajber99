/*
* @author  <Ibrahim Jaber>
* @version <1.0>
*

* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < ====================================================================== >
*
*
* @section LICENSE
*  <any necessary attributions>
*
*  Copyright 2020
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/





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



int main() {
	std::ifstream file1("HW7.txt");
	std::vector<std::string>vec{};
	std::vector<std::string>vec2{};
	std::vector<std::string>vec3{};
	char c{};
	int n;
	std::string buffer;
	if (file1.fail()) {
		exit(-1);
	}
	int counter{ 0 };
	while (!file1.eof()) {
		std::getline(file1, buffer);
		for (int i{ 0 }; i < buffer.size(); i++) {
			if (buffer.at(i) == '?') {
				vec.push_back(buffer);
			}
			if (buffer.size() > 1 && buffer.at(i) != '?' && buffer.size() - i == 1) {
				vec2.push_back(buffer);
			}
			if (buffer.at(i) >= 48 && buffer.at(i) <= 57) {
				vec3.push_back((buffer));
			}
		}
	}
	std::cout << std::endl;
	std::string lock;
	while (true) {
		int k = rand() % vec.size();
		std::cout << "Enter to play\n";
		std::cin >> lock;
		std::cout << vec.at(k) << std::endl;
		std::cout << vec2.at(k * 4) << "     " << vec2.at((k * 4) + 1) << "     " << vec2.at((k * 4) + 2) << "    " << vec2.at((k * 4) + 3) << std::endl;
		std::cout << vec3.at(k) << std::endl;
		std::cout << "Answer the question by inserting an answer between 1-4\n";
		std::cin >> lock;
		system("cls");
		if (lock == vec3.at(k)) {
			std::cout << "Great you Guessed it\n";
			break;
		}
		else if (lock != vec3.at(k)) {
			std::cout << "You Lose try again\n";
		}
	}
}


