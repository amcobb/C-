#include <iostream>                        
using namespace std;                       

int main() {                               
    float celsius;                         
    float fahrenheit;

    cout << "Enter Celsius temperature: "; 
    cin >> celsius;
    fahrenheit = 5.0 * (celsius + 32) / 9;
    cout << "Fahrenheit = " << fahrenheit << endl;

    return 0;                             
}