#include <iostream>

using namespace std;


void rPeat(int arr[], int size) {
    int count = 0, same = 0, big = 0, bignum = 0;
    for (int i = 0; i < size; i++) {
        same = arr[i];
        count = 0;
        for (int a = 0; a < size; a++) {
            if (arr[a] == same) {
                count++;
            }


        }
        if (big < count) {
            big = count;
            bignum = arr[i];
        }
    }

    cout << "Most repeated number:" << bignum << endl << " Its freaquency:" << big << endl;

}

void readArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];


    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " << endl;
    }
}

 

int main() {
    int arr[100], n;
    cin >> n;

    readArr(arr, n);

    rPeat(arr, n);

 
    

    return 0;
}
