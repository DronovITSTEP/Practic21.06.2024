#include <iostream>
#include <list>

using namespace std;

typedef list<int> myList;

void ShowList(myList& l1, myList& l2) {
	myList::iterator iter;

	cout << "Лист 1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	cout << "Лист 2: ";
	for (int item : l2) {
		cout << item << " ";
	}
	cout << endl << endl;
}

int main()
{
	myList list1, list2;

	for (int i = 2; i < 7; i++) {
		list1.push_back(i * 2);
		list2.push_front(i * 2);
	}
	ShowList(list1, list2);
	list1.reverse();
	//				куда	  откуда    что
	list2.splice(list2.end(), list2, list2.begin());
	ShowList(list1, list2);

	list1.sort();
	list2.sort();
	ShowList(list1, list2);

	list1.merge(list2);
	ShowList(list1, list2);

	list1.unique();
	ShowList(list1, list2);

}
