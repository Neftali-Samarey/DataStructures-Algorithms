#ifndef LIST_H
#define LIST_H

class List {

private: 
	int m_count;
	int * m_items;

public:

	// Constructor 
	List();
	~List();

	// Methods
	int Get (int index);
	void Insert(int index, int value);
	int Search(int value);
	void Remove(int index);
	int Count();
}

#endif


// Implementation

