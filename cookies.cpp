#include <iostream>

using namespace std;

int main() {
    // Write your main here
    int cookies;
    int cookiesPerBox = 24;
    int boxesPerContainer = 75;

    cout <<" How many cookies do you want? ";
    cin >> cookies;

    int boxesNeeded = cookies / cookiesPerBox;
    int containersNeeded = boxesNeeded / boxesPerContainer;
    
    int leftoverCookies = cookies % cookiesPerBox;
    int leftoverBoxes = boxesNeeded % boxesPerContainer;

    cout << "Number of boxes needed: "<< boxesNeeded << endl;
    cout << "Number of containers needed: " << containersNeeded << endl;

    if (leftoverCookies > 0) {
        cout << "Leftover cookies: " << leftoverCookies << endl;
    }

    else if (leftoverBoxes > 0) {
        cout << "Leftover boxes: " << leftoverBoxes << endl;
    }



    return 0;



}
