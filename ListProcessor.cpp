// Omar Sanchez COSC 2030
// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"

int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "The total of cows is " << cows.sum() << "." << endl;
	cout << "The total of pigs is " << pigs.sum() << "." << endl;
	cout << "The total of horses is " << horses.sum() << "." << endl;

	pigs = cows;
	List cats;
	cats.insertAtLast(26.5);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cats list  :  " << cats << endl;
	cout << "The total of cows is " << cows.sum() << "." << endl;
	cout << "The total of pigs is " << pigs.sum() << "." << endl;
	cout << "The total of horses is " << horses.sum() << "." << endl;


	pigs = horses;
	horses.insertAtLast(58.3);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "The total of cows is " << cows.sum() << "." << endl;
	cout << "The total of pigs is " << pigs.sum() << "." << endl;
	cout << "The total of horses is " << horses.sum() << "." << endl;



	cout << "End of code" << endl;
	system("PAUSE");

	return 0;
}
