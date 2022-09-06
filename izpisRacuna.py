#Avtor: Uroš Strnad, vaja za iPlus

from urllib.request import urlopen      #--> za importiranje vsebine iz url naslova
from os import system                   #--> za izbris zaslona
import json                             #--> za upravljanje s podatki JSON-a

while 1 == 1:                           #--> to while zanko se lahko uporabi tudi za dodajanje drugega pogoja, kdaj se program osveži z novim izpisom
                                        #zaenkrat se osvežitev potrdi z inputom tipkovnice, izhod iz programa se izvede z zaprtjem okna v OS
    #za počiščenje zaslona v konzoli
    system('cls')
    
    #import podatkov iz podanega url naslova
    URL = 'http://apica.iplus.si/api/Naloga?API_KEY=A594323A-B351-4F29-B7C4-F348E8D1ED92'
    request = urlopen(URL).read()
    json_read = json.loads(request)['Data']

    #dodajanje vrednosti spremenljivkam iz podatkov JSON-a
    Podjetje = json_read['a'].replace("#", "\n" + ' '*15)      #--> replace '#' je za lepši izgled v izpisu
    Prodajalec = json_read['b']
    StRacuna = json_read['c']
    Datum = json_read['d']
    Davek = json_read['e']          
    ZOI = json_read['f']
    EOR = json_read['g']
    Postavke = json_read['z']

    #izpis podatkov brez loop-a, dodane so malenkostne tekstovne poravnave za lepši izpis
    print(
        f"\n{'Podjetje:':<15}{Podjetje:>10}",
        f"\n{'Prodajalec:':<15}{Prodajalec:<10}",
        f"\n{'Št. računa:':<15}{StRacuna:<10}",
        f"\n{'Datum:':<15}{Datum:<10}",
        f"\n{'Davek:':<15}{Davek*100}{'%':<10}",
        f"\n{'ZOI:':<15}{ZOI:<10}",
        f"\n{'EOR:':<15}{EOR:<10}",
    )

    #izpis podatkov z loop-om, ker je lahko različno število kupljenih artiklov
    PostavkaTotal = 0.0
    StArtikla = 0
    PostavkaTotalDavek = 0.0
    DavekNaPostavko = 0.0

    for postavka in Postavke:
        Artikel = postavka['a']
        Kolicina = postavka['b']
        Vrednost = postavka['c']
        PostavkaTotal += int(Kolicina) * float(Vrednost)
        StArtikla += 1
               
        print()
        print("Artikel", StArtikla, ":", Artikel)
        print("           Vrednost: ", Vrednost, '€')
        print("           Količina: ", Kolicina)
               
    DavekNaPostavko = PostavkaTotal * Davek    
    PostavkaTotalDavek = PostavkaTotal + DavekNaPostavko
    
    print()
    print('Cena brez davka: ', format(PostavkaTotal, '.2f'), '€') 
    print('Skupna cena z davkom:', format(PostavkaTotalDavek, '.2f'), '€')
    
    
    #za osvežitev trenutnih podatkov iz URL naslova
    print()
    input("... Za osvežitev pritisni ENTER ...")

    
