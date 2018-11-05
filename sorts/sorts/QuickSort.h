///thanks for the video lecture for Rob Edward from SDSU
#pragma once
#include <iostream>
class QuickSort
{
private:
	int m_size;
	int *m_array;
	void swap(int from, int to);
	void quickSort(int from, int to);
public:
	QuickSort();
	~QuickSort();
	int* sort(int *arr, int s);
	friend std::ostream& operator<<(std::ostream& os, QuickSort& q);
};

