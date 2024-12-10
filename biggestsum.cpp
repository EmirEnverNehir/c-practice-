#include <iostream>

using namespace std;


void bigSum(int arr[], int size) {
    int sum = 0, big = 0, bignum = 0, bignum2=0;
    for (int i = 0; i < size; i++) {
        
        sum = 0;
        for (int a = 0; a < size; a++) {
            sum = 0;
            
            if (arr[a] != arr[i]) {
            sum = arr[i] + arr[a];
            if (big < sum) {
                big = sum;
                bignum = arr[i];
                bignum2 = arr[a];
            }
            
          
        }
             


        }
        
    }

    cout  << " biggest sum num1:" << bignum << "bigset sum num2:"<< bignum2 << "biggest sum:" << big << endl;

}

void readArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];


    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

 

int main() {
    int arr[100], n;
    cin >> n;

    readArr(arr, n);

    bigSum(arr, n);

 
    

    return 0;
}
