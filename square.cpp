//square pattern using only 1 for loop
#include <iostream>
using namespace std;

int main()
{
    int length, width;

    cout << "square's length: "; cin >> length;
    cout << "square's width: "; cin >> width;

    for(int i=1; i<=length*width; i++)
    {
        if(i>length && i<=length*(width-1)) {
            if(i%length==1 || i%length==0) {
                cout << "*";
                if(i%length==0) cout << endl;
            }
            else cout << " ";
        }
        else {
            cout << "*";
            if(i%length==0) cout << endl;
        }
    }

    return 0;
}