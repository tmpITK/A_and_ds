#include "pch.h"
#include "MergeSort.h"
#include <iostream>

MergeSort::MergeSort(int *array, int size): m_size(size), m_arr(array)
{
	m_temp = new int[m_size];
	split(0, m_size - 1);
}

MergeSort::~MergeSort()
{
	delete[] m_temp;
}

void MergeSort::split(int low, int high)
{
	///if 1 element remains
	if (low == high) {
		return;
	}
	int mid = (high + low) / 2;
	split(low, mid);
	split(mid + 1, high);
	merge(low, mid, high);
}

void MergeSort::merge(int low, int mid, int high)
{
	int i = low, j = mid + 1, tempposn = low;
	while (i <= mid && j <= high) {
		if (m_arr[i] < m_arr[j]) {
			m_temp[tempposn++] = m_arr[i++];
		}
		else {
			m_temp[tempposn++] = m_arr[j++];
		}
	}
	while (i <= mid) {
		m_temp[tempposn++] = m_arr[i++];
	}
	while (j <= high) {
		m_temp[tempposn++] = m_arr[j++];
	}
	std::cout << "Merge sorted between "<<low<<" "<<high<<": ";
	for (tempposn = low; tempposn <= high; tempposn++) {
		m_arr[tempposn] = m_temp[tempposn];
		std::cout << m_temp[tempposn] << " ";
	}
	std::cout << std::endl;
}

