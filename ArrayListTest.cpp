/*
 * ArrayListTest.cpp
 *
 *  Created on: Aug 2, 2012
 *      Author: ethan
 */

#include "ArrayList.h"
#include <iostream>

/*
 * Test harness for ArrayList, tests all of the functions and has
 * verbose output to show results of actions.
 *
 * @return 0
 */
int main(void) {


    using namespace std;

    ArrayList<int> myList;

    cout << "Adding 16 members.\n\n";
    myList.add(184387);
    myList.add(14);
    myList.add(147);
    myList.add(1);
    myList.add(-37);
    myList.add(584);
    myList.add(-2147);
    myList.add(0);
    myList.add(-75);
    myList.add(147);
    myList.add(-37);
    myList.add(0);
    myList.add(25);
    myList.add(187);
    myList.add(92);
    myList.add(-17);

    cout << "Printing added members.\n";
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Getting element at 0\n";
    cout << "The element at 0 is: " << *myList.get(0) << endl << endl;

    cout << "Getting element at " << myList.getSize() - 1 << endl;
    cout << "The element at " << myList.getSize() - 1
            << " is: " << *myList.get(myList.getSize() - 1) << endl << endl;

    cout << "Removing index 22 (out of bounds)\n";
    myList.remove(22);
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Removing index 0\n";
    const int * removed = myList.remove(0);
    cout << "Removed " << *removed << endl;
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Removing index 5\n";
    myList.remove(5);
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Removing element -2147 (already removed)\n";
    myList.removeElement(-2147);
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Removing element 14 (already removed)\n";
    myList.removeElement(14);
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Running Insertion Sort\n";
    myList.insertionSort();
    cout << myList.toString() << endl;

    cout << "Shuffling ArrayList\n";
    myList.shuffle();
    cout << "The list now contains:\n";
    cout << myList.toString() << endl;

    cout << "Running Quick Sort\n";
    myList.quickSort();
    cout << "The sorted list is:\n";
    cout << myList.toString() << endl;

    cout << "Shuffling elements.\n";
    myList.shuffle();
    cout << "The list now contains:\n";
    cout << myList.toString() << endl;

    cout << "Running Merge Sort\n";
    myList.mergeSort();
    cout << myList.toString() << endl;

    cout << "Binary Search Test\n";
    cout << "Searching for 584\n";
    int bsIndex = myList.binarySearch(584);
    cout << "The index of 584 is: " << bsIndex << endl;
    cout << "Want proof? " << *myList.get(bsIndex) << endl << endl;

    cout << "Searching for -999\n";
    bsIndex = myList.binarySearch(-999);
    cout << "The index of -999 is: " << bsIndex << endl;
    cout << "As expected, the index is -1, meaning -999 DNE in the list\n\n";

    cout << "Adding 49 to the sorted ArrayList\n";
    myList.addToSort(49);
    cout << "The list now contains:\n" << myList.toString() << endl;

    cout << "Adding 666 to index 7\n";
    myList.add(666, 7);
    cout << " after add!?\n";
    cout << "The list now contains:\n" << myList.toString() << endl;

    cout << "Adding -9 to index 45 (way out of bounds!)\n";
    myList.add(-9, 45);
    cout << "The list now contains:\n" << myList.toString();
    cout << "As expected the element was not added at the invalid index!\n\n";

    cout << "Creating new ArrayList hugeList with myList as seed.\n";
    ArrayList<int> hugeList = ArrayList<int>(myList);
    cout << "Huge list contains:\n" << hugeList.toString() << endl;

    cout << "Adding 0 to hugeList at index 9, and index 8\n";
    hugeList.add(0, 8);
    hugeList.add(0, 9);
    cout << "hugeList now holds:\n" << hugeList.toString() << endl;

    cout << "Adding myList to hugeList again, at index 9!\n";
    hugeList.add(myList, 9);
    cout << "Huge list contains:\n" << hugeList.toString() << endl;

    cout << "Test Ending.";
    return 0;
}
