 #include <iostream>

using namespace std;

int max_digit(int n, int maxDigit = 0) {
     
    while (n > 10) {
        int digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;
    }

    return maxDigit;  
}


int sum_digits(int n) {
    int arr[10];
    int m=0,sum=0;
    while (n > 0) {
        if (n != 0) {
            arr[m] = n % 10;



            sum = sum + arr[m];
        }
        
        m++;
        n /= 10;
    }

    for (int i = 0; i<10 ; i++) {
       
    }
    
    return sum;

}

 
int main()
{
    int num;
    cin >> num;

    cout << sum_digits(num) << endl;
    cout << max_digit(num);
    
    
}

 
