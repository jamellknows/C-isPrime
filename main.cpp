#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

//scaffolding fot prime finder will say multiples of 3 and 5 are prime
using namespace std;

//((sqrt(y^2 pm 0.25)/theta)/theta ) - 1) / 6


int convertToRiemann(int number){
    long double theta = M_PI / 3;
    vector <long double> arr1;
    int conv1 = number + 1;
    int conv2 = number - 1;
    int length; 
    string len = to_string(number);
    len.pop_back();
    length = stoi(len);





    for( int i = 0; i < length ; i++)
    {
        double y_1 = theta * (1 + 6 * i);
        y_1 = sqrt(pow(y_1/theta, 2) - 0.25);
        // cout << y_1 << endl;
        arr1.push_back(y_1);
        double y_2 = 5 * theta * (1 + ((6 / 5) * i));
        y_2 = sqrt(pow(y_2/theta, 2) - 0.25); 
       // cout << y_2 << endl;
        arr1.push_back(y_2);
      


    }
    int lArr1 = arr1.size();

    
    sort(arr1.begin(), arr1.begin() + lArr1);
    for (int k = 0; k < lArr1; k++){
        //Here we sort out the PI error where all the zeros aren't even. 
        if( ((int)floor(arr1[k])) % 2 != 0){
                arr1[k] = arr1[k] + 1;
       
        }
    }
    for(int k = 0; k < lArr1; k++)
    {
        arr1[k] = floor(arr1[k]);
    }
if (( std::find(arr1.begin(), arr1.end(), conv1) != arr1.end()  ) && (number % 3 != 0) && (number % 5 != 0))
   cout << "Prime or Prime Product p1 . p2"<<endl;
else if (( std::find(arr1.begin(), arr1.end(), conv2) != arr1.end() ) && (number % 3 != 0) && (number % 5 != 0))
   cout << "Prime or Prime Product p1 . p2"<<endl;
else 
    cout << "Not Prime or Prime Product p1 . p2" << endl;
}



// to check if a number is prime the number must be inverted by the reimann process to see if it is a non trivial zero. 
// create two variables pm 1
// 
int main(){
    cout << "\n\n\t **** WELCOME TO JAMELL'S IS A NUMBER A PRIME PROGRAM ****" <<endl;
    cout << "\n\n\t **** THIS PROGRAM IS BASED ON THE RIEMANN HYPOTHESIS AND AS SUCH WILL TELL YOU ****" <<endl;
    cout << "\n\n\t **** IF A NUMBER IS A PRIME NUMBER OR A MULTIPLE OF PRIME NUMBERS BUT CANNOT TELL THE DIFFERENCE ****" <<endl;
    cout << "\n\n\t **** PLEASE ENTER YOUR NUMBER ****"<<endl;
    cout << "\n\n\t **** THE NUMBER MUST BE AN INTEGER OF COURSE ****" <<endl;
    int number;
    cin >> number;
    convertToRiemann(number);


}