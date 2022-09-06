#include <iostream>
#include <string>
#include <cstdlib>
#include "fns_palindrom.hpp"

using namespace std;



int main () {

    //Da se počisti zaslon
    cout << "\033[2J\033[1;1H";

    string beseda;
        
    cout << "Ta program preveri, če je beseda palindrom.\n";
    
    while (true) {
        


        cout << "Vnesi besedo: "; cin >> beseda;
        //funkcija, ki spremeni vse velike črke v male
        beseda = v_male_tiskane(beseda);
        

        //cout << beseda << endl;
                            
        if (je_palindrom(beseda) == true) cout << "Beseda je palindrom.\n"; else cout << "Beseda ni palindrom.\n";
        
        cout << "Pritisni enter za ponovni vnos...";
        system("pause>0");
        cout << "\n__________________________________\n";

    }


    //return -1;

}

