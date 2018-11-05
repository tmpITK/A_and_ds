///thanks for the video lecture for Rob Edward from SDSU
#pragma once
class MergeSort
{
private:
	int m_size;
	int *m_arr, *m_temp;
	void split(int low, int high);
	void merge(int low, int mid, int high);

public:
	MergeSort(int *array, int size);
	~MergeSort();
};

