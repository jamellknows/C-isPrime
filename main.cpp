#include <iostream>
#include <cmath>

using namespace std;

int convertToRiemann(int number){
    long double theta = M_PI / 3;
    int conv;
    for(int i = 0; i < 2; i++){
        if(i == 0){
            conv = number - 1;
            conv = pow(conv, 2);
            conv = conv + 0.25;
            conv = sqrt(conv);
            for(int j = 0; j < 2; j++)
            {
                if(j == 0){
                     conv = conv * theta / 6;
                     if(floor(conv) == conv){
                         return conv;
                     }
                }else if(j == 1){
                    conv = conv * 5 * theta / 6;
                     if(floor(conv) == conv){
                         return conv;
                     }
                }
            }

        }else if(i == 1)
        {
            conv = number + 1;
            conv = pow(conv, 2);
            conv = conv + 0.25;
            conv = sqrt(conv);
              for(int j = 0; j < 2; j++)
            {
                if(j == 0){
                     conv = conv * theta / 6;
                      if(floor(conv) == conv){
                         return conv;
                     }
                }else if(j == 1){
                    conv = conv * 5 * theta / 6;
                     if(floor(conv) == conv){
                         return conv;
                     }
                }
            }
        }
    }
    cout << "The number converted is : " << conv << endl;
}



int main(){
    cout << "\n\n\t **** WELCOME TO JAMELL'S IS A NUMBER A PRIME FUNCTION FOR NOW THIS IS A GUESS BECUASE OF REASONS****" <<endl;
    cout << "\n\n\t **** PLEASE ENETER YOUR NUMBER ****"<<endl;
    cout << "\n\n\t **** THE NUMBER MUST BE AN INTEGER OF COURSE ****" <<endl;
    int number;
    cin >> number;
    convertToRiemann();

   

}