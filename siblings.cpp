#include <iostream>
using namespace std;

int main() {
        //variables
        int numSiblings,
            x;
        string siblingsName;

        do
        {
          cout << "How many brothers and sisters do you have? ";
          cin >> numSiblings;
          if(numSiblings < 0)
            cout << "How could that be?" << endl;
        }while(numSiblings < 0);

        if (numSiblings == 0) // no silbings
        {
                cout << "Oh, you were an only child!\n";
        }

        else if (numSiblings <= 3) // 1-3 siblings
        {
                cout << "Sounds like a nice size family\n";
        }

        else if (numSiblings >= 4) // 4 or more silbings
        {
                cout << "A big family!\n";
        }

        for (int x = 1; x <= numSiblings; x++) //ask for names of siblings if numSiblings >= 1
        {
                cout << "What's the name of your number #" << x << " sibling? ";
                cin >> siblingsName;

        }
        return 0;
}
