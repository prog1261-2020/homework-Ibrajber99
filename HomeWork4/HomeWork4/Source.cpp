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
#include <set>



//Quick Sort---------------------------------------
int qPartSort(std::vector<int>& vec, int begin, int end) {

	int pivot = vec.at(end);
	int partitionI = begin; //setting index as start initially
	for (int i = begin; i < end; i++) {
		if (vec.at(i) <= pivot) {
			std::swap(vec.at(i), vec.at(partitionI));//Swap if the element is lesser than the pivot
			partitionI++;
		}
	}
	std::swap(vec.at(partitionI), vec.at(end)); //swap the piv with element at partition index
	return partitionI;

}

void quickSort(std::vector<int>& vec, int begin, int end) {
	if (begin < end) {
		int loc = qPartSort(vec, begin, end);//calling qPartSort function
		quickSort(vec, begin, loc - 1);
		quickSort(vec, loc + 1, end);
	}
}
//Quick Sort---------------------------------------