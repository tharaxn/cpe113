/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : ArrayList Testing
 **********************************************/

#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{

    ArrayList list; // call ArrayList(5)
    int choice, element, index;
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
            cout << "Result maximum nuber inlist is " << list.max() << endl;
            break;

        case 9:
            cout << "Result maximum is " << list.min() << endl;
            break;

        case 0:
            cout << "Bye..." << endl;
            break;

        default:
            cout << "worng choice , try Agatn" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}