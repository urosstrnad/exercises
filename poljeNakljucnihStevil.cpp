#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

//Function prototyping:
int *poljeNakljucnihStevil (int &velikost);
float getMedian (int polje [], int velikost);
float getGeometricMean (int polje[], int velikost);
void getModus(int polje[], int velikost);
int getBiggest(int polje[], int velikost);
int getSmallest(int polje[], int velikost);
double getAverage(int polje[], int velikost);
int getSum(int polje[], int velikost);


//main, glavna funkcija programa - za izpis podatkov, željeni inputi od uporabnika...
int main() {

    char retry;

    do{
        srand(time(NULL));
        
        int vnos;

        //zapolnitev polj z vrednostmi med 1 in 10;
        std::cout << "Koliko števil želiš? ";
        std::cin >> vnos;
        int *getPolja = poljeNakljucnihStevil(vnos);
        
        

        std::cout << "Računalnik je izbral " << vnos << " naključnih naravnih števil od 1 do 10: \n";
        
        for (int a = 0; a < vnos ; a++) {

            std::cout << getPolja[a];

            if (a != vnos - 1) std::cout << ", "; else std::cout << "\n";

        }

        
        //Izpis najmanjšega elementa:
        std::cout << "Najmanjši element je: " << getSmallest(getPolja, vnos) << std::endl;

        //Izpis navečjega elementa:
        std::cout << "Največji element je: " << getBiggest(getPolja, vnos) << std::endl;

        //Izračun vsote s priklicom funkcije getSum;
        std::cout << "Vsota vseh elementov je: " << getSum(getPolja, vnos) << std::endl;

        //izračun povprečja s priklicom funkcije getAverage;
        std::cout << "Aritmetično povprečje je: " << getAverage(getPolja, vnos) << std::endl;

        //izračun geometrijske povprečno vrednost:
        std::cout << "Geometrijska povprečna vrednost je: " << getGeometricMean(getPolja, vnos) << std::endl;

        //Izračun mediane: 
        std::cout << "Mediana je: " << getMedian(getPolja, vnos) << std::endl;

        //Izpis modusa:
        std::cout << "Modus je/modusi so: ";
        getModus(getPolja, vnos);
        std::cout << std::endl;


        std::cout << "\nAli želiš ponovno vnesiti število naključnih elementov? d/n ";
        std::cin >> retry; std::cout << "\n";


    } while (retry == 'd' || retry == 'D');

    
    return 0;

}

/*funkcija za mediano -- če je liho ((2n -1) % 2 != 0 ) število potem je sredinski element
če je sodo ((2n)% 2 == 0) potem je mediana prvi srednji + drugi srednji/2;*/
float getMedian (int polje [], int velikost) {

    
    std::sort(polje, polje + velikost);

    //Za izpis zaporedja po velikosti elementov:
    //std::cout << std::endl;
    /*for (int i = 0; i < velikost; i++) {

        std::cout << polje[i] << " ";

    }*/
    //std::cout << "\nMediana je: ";

    float mediana = 0;
    int indexMediane = velikost / 2;


    if (velikost % 2 == 0) {

        mediana = (polje[indexMediane - 1] + (float)polje[indexMediane]) / 2;
                       
    } else {

        mediana = polje[indexMediane];
        
    }

    return mediana;

}

//funkcija za izračun geometrijske sredine
float getGeometricMean (int polje[], int velikost) {

    float sum = 0;

    for (int i = 0; i < velikost; i++) {

        sum = sum + log(polje[i]);

    }

    sum = sum / velikost;

    return exp(sum);


}

// funkcija z algoritmom za iskanje modusa - tj. najbolj frekventne vrednosti;
void getModus(int polje[], int velikost) {


    int modus = 0;
    int modusPlace = 0;
    int poljeZaModus[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int biggestValue = poljeZaModus[0];

    //seštevanje pojavov enakih števil - kolikokrat se število od 1 do 10 ponovi
    //za vsako število posebej ter vpisovanje elementov v novi array
    //v index 0 se vpiše koliko števil 1 je, v index 1 koliko števil 2,...
    for (int i = 0; i < velikost; i++ ) {

        switch (polje[i]) {

            case 1:
                poljeZaModus[0] += 1;
                break;

            case 2:
                poljeZaModus[1] += 1;
                break;

            case 3:
                poljeZaModus[2] += 1;
                break;

            case 4:
                poljeZaModus[3] += 1;
                break;

            case 5:
                poljeZaModus[4] += 1;
                break;

            case 6:
                poljeZaModus[5] += 1;
                break;

            case 7:
                poljeZaModus[6] += 1;
                break;

            case 8:
                poljeZaModus[7] += 1;
                break;

            case 9:
                poljeZaModus[8] += 1;
                break;

            case 10:
                poljeZaModus[9] += 1;
                break;

            default:
                std::cout << "Error in swtich statemenet...";

        }
    
    }



    for (int i = 0; i < 10 ; i++) {

        
        if (poljeZaModus[i] > biggestValue) {

            biggestValue = poljeZaModus[i];
            

        } 

    }
    
    //izpiše prvi modus//
    //std::cout << modusPlace;
    
    //preveri, če je več modusov
    for (int i = 0; i < 10 ; i++) {
        
        if (poljeZaModus[i] == biggestValue) {
            
            modus = i + 1;
            std::cout << modus << " ";
        
        }

    }

  

    //return modus ;

}

//funkcija za iskanje največjega elementa
int getBiggest(int polje[], int velikost) {


// /*  

    int najvecji = polje[0];

    for (int i = 0; i < velikost -1 ; i++) {

        
        if (polje[i] >= najvecji) {

            najvecji = polje[i];

        } 

    }

    return najvecji;

// */

    //int najvecji = *std::max_element(polje, polje + velikost);
    return najvecji;

}

//funkcija za iskanje najmanjšega elementa
int getSmallest(int polje[], int velikost) {

  // /* 
   int najmanjsi = polje[0];

    for (int i = 0; i < velikost; i++) {

        
        if (polje[i] <= najmanjsi) {
        
            najmanjsi = polje[i];

        }

    }

   // */
    //int najmanjsi = *std::min_element(polje, polje + velikost);
    return najmanjsi;

}

//funkcija za izračun povprečja elementov
double getAverage(int polje[], int velikost) {

    double sum = 0;

    for (int i = 0; i < velikost; i++) {

        sum = sum + polje[i];

    }

    double avg = sum / 2;

    return avg;

}

//funkcija za izračun vsote vseh elementov
int getSum(int polje[], int velikost) {
    
    int sum = 0;

    for (int i = 0; i < velikost; i++) {

        sum += polje[i];

    }

    return sum;

}

//funkcija -- dinamična deklaracija polja, s poljubno velikostjo, ki jo vnese uporabnik; vsako polje je zapolnjeno z naključnim N številom od 1 do 10
int *poljeNakljucnihStevil (int &velikost) {
    
    int *poljeStevil = new int[velikost];

    
    for (int i = 0; i < velikost; i++) {

        poljeStevil[i] = rand() % 10 + 1;

    };

    return poljeStevil;
  
}
