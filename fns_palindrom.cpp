#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string v_male_tiskane (string spremeniString) {

    for (int i = 0; i < spremeniString.size(); i++) {

        spremeniString[i] = tolower(spremeniString[i]);

    }

    return spremeniString;

    //cout << spremeniString << endl;
}

bool je_palindrom (string preveriBesedo) {

    string reverseBeseda = "";

    for (int i = preveriBesedo.size() - 1; i >=0; i--) {

        reverseBeseda += preveriBesedo[i];

    }
    
    //cout << "Izpiši reversed besedo iz funkcije je_palindrom: " << reverseBeseda << endl;

    if (preveriBesedo == reverseBeseda) return true; else return false;

}