
//question 12

#include <iostream>
using namespace std;

string dashNumber(string numbers){
    string store = "";
    for(int x = 0; x < numbers.length(); x++){
        if((numbers[x] == '1' || numbers[x] == '3' || numbers[x] == '5' 
        || numbers[x] == '7' || numbers[x] == '9') && (numbers[x+1] == '1' || numbers[x+1] == '3' || numbers[x+1] == '5' 
        || numbers[x+1] == '7' || numbers[x+1] == '9')){
            store += numbers[x];
            store += int(45); //in ASCII
            }
        else{
           store += numbers[x]; 
        }
        }
        return store;
    }
    


int main()
{
    cout << dashNumber("213421429324") << endl; //enter any number

    return 0;
}
