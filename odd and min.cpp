#include <iostream>

using namespace std;


int min_digit(int n, int minDigit = 0) {

    while (n > 10) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        n /= 10;
    }

    return minDigit;
}




int sumofOdd(int n) {
    int arr[10];
    int m=0,sum = 0;
    while (n < 10) {
        if (n % 2 == 0) {
            arr[m] = n % 10;
            sum = sum + arr[m];
        }
        n /= 10;
        m++;
       
    }
    return sum;
}
 

int main() {
        int num;
        
        cin >> num;

        cout << sumofOdd(num);
        cout << min_digit(num);
       

        return 0;
}
