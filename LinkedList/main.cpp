/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : LinkedList Testing
 **********************************************/

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{

    LinkedList list;
    int choice, element, index;
    float value;
    do
    {
        cout << "--------current list status---------" << endl;
        list.display();

        cout << "--- Menu --------------------------" << endl;
        cout << " 1: add element to list, add()" << endl;
        cout << " 2: remove element from list, remove() " << endl;
        cout << " 3: set element to list, set()" << endl;
        cout << " 4: get element from list, get()" << endl;
        cout << " 5: index of element, indexOf()" << endl;
        cout << " 6: list size, size()" << endl;
        cout << " 7: clear list, clear()" << endl;
        cout << " 8: find maximum number from list, max()" << endl;
        cout << " 9: find minimum number from list, min()" << endl;
        cout << " 10: find number of odd, oddCount()" << endl;
        cout << " 11: find number of even, evenCount()" << endl;
        cout << " 12: calculate summation, sum()" << endl;
        cout << " 13: calculate average, mean()" << endl;
        cout << "0: exit" << endl;
        cout << "==================================================" << endl;

        cout << "Enter your choice:";
        cin >> choice;

        cout << "==================================================" << endl;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter index:";
            cin >> index;
            cout << "Enter element:";
            cin >> element;
            list.add(index, element);
            break;

        case 2:
            cout << "Enter index:";
            cin >> index;
            element = list.remove(index);
            // cout << "Result element is" << element << endl;
            break;

        case 3:
            cout << "enter index:";
            cin >> index;
            cout << "enter element:";
            cin >> element;
            list.set(index, element);
            break;

        case 4:
            cout << "Enter index:";
            cin >> index;
            element = list.get(index);
            cout << "result element is " << element << endl;
            break;

        case 5:
            cout << "enter element:";
            cin >> element;
            index = list.indexOf(element);
            cout << "result index is" << index << endl;
            break;

        case 6:
            cout << "Result list size is" << list.size() << endl;
            break;

        case 7:
            list.clear();
            cout << "List is cleared" << endl;
            break;

        case 8:
            cout << "Result maximum number inlist is " << list.max() << endl;
            break;

        case 9:
            cout << "Result minimum is " << list.min() << endl;
            break;

        case 10:
            element = list.oddCount();
            cout << "Odd count is" << element << endl;
            break;

        case 11:
            element = list.evenCount();
            cout << "Even count is" << element << endl;
            break;

        case 12:
            value = list.sum();
            cout << "Summation is" << value << endl;
            break;

        case 13:
            value = list.mean();
            cout << "Average is " << value << endl;
            break;

        case 0:
            cout << "Bye..." << endl;
            break;

        default:
            cout << "Worng choice , Please try again" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}