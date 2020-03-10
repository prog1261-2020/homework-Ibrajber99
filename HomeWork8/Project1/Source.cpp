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


int main() {



	std::fstream fileT;
	fileT.open("yo.txt");
	if (!fileT) {
		std::cout << " Open File error";
		exit(-1);
	}
	std::string buffer;
	std::map<std::string, int>map1;
	while (!fileT.eof()) {
		fileT >> buffer;
		std::transform(buffer.begin(), buffer.end(), buffer.begin(), [](char c) {return std::toupper(c); });
		for (int i{ 0 }; i < buffer.size(); i++) {
			if (std::isalpha(buffer.at(i)) == false) {
				buffer.erase(buffer.begin() + i);
				i -= 1;
			}
		}
		auto p = map1.find(buffer);
		if (p != map1.end()) {
			p->second += 1;
		}
		else {
			map1.insert({buffer, 1});
		}
	}
	for (auto i : map1) {
		std::cout << std::setw(10) <<"Word:    '" << i.first <<std::right<<"'     Times That occured: " << i.second << std::endl;
	}

	


	

	

	
}

