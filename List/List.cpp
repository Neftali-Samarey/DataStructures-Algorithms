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
	return m_items[index];
}

// Inserting data of type value, at Index
void List:: Insert(int index, int value) {

}