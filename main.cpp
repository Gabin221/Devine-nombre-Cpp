#include <iostream>
#include <random>
#include <ctime>
#include <string>

using namespace std;

constexpr int MIN = 1;
constexpr int MAX = 100;

int main(){
    srand(time(nullptr));
    int proposition, nombre = rand() % MAX;
    string reponse = "False";

    while(reponse != "True"){
        cout << "Je pense a quel nombre ? ";
        cin >> proposition;
        if(proposition < nombre){
            cout << "Perdu, le nombre est plus grand !" << endl;
        }
        else if(proposition > nombre){
            cout << "Perdu, le nombre est plus petit !" << endl;
        }
        else if(proposition == nombre){
            cout << "Bravo !";
            reponse = "True";
        }
    }

    return 0;
}
