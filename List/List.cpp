#include "List.h"

// Initial constructor
List::List() {
	// Initial item setup
}

// Getting an Index, making sure that the index is not out of bounds
int List::Get(int index) {

	if (index < 0 || index > m_count) {
		return -1;
	}
	return m_items[index];					// O(1)
}

// Inserting data of type value (int), at Index. Complexity: O(n)
void List:: Insert(int index, int value) {

	// Check if the index is out of bounds
	if (index < 0 || index > m_count) {
		return;
	}

	// Copy the current array
	// oldArray is a pointer of type int. 
	int * oldArray = m_items;

	// Increase the array length
	m_count++;

	// Init a new array
	m_items = new int [m_count];

	// Fill the new array with inserted data
	for (int i = 0, j = 0; i < m_count; i++) {

		if (index == i) {
			m_items[i] = value;
		} else {
			m_items[i] = oldArray[j];
			++j;
		}
	}

	// Remove copied array
	delete [] oldArray;

}	