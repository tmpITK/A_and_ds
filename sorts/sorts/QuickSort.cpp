#include "pch.h"
#include "QuickSort.h"


QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}

int* QuickSort::sort(int *arr, int s) {
	m_array = arr;
	m_size = s;
	quickSort(0, m_size - 1);
	return m_array;
}

void QuickSort::quickSort(int from, int to) {
	if (from >= to) {
		return;
	}
	int counter = from;
	for (int i = from; i < to; i++) {

		if (m_array[i] < m_array[to]) {
			swap(i, counter);
			counter++;
		}
	}
	swap(counter, to);
	quickSort(from, counter - 1);
	quickSort(counter + 1, to);
}

void QuickSort::swap(int from, int to) {
	auto temp = m_array[to];
	m_array[to] = m_array[from];
	m_array[from] = temp;
}

std::ostream& operator<<(std::ostream& os, QuickSort& q) {
	for (int i = 0; i < q.m_size; i++) {
		os << q.m_array[i] << " ";
	}
	return os << std::endl;
}