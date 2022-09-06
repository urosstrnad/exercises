#Testiranje input vnosov s tipkovnico v Python jeziku

from os import system

while 1==1:

    system('cls')

    mojaNajljubsaPtica = input()
    print('Naključni vnos je: ', mojaNajljubsaPtica)

    mojaNajljubsaPtica = input('Katera je tvoja najljubša ptica? ')
    x = 'Moja najljubša ptica je: '
    print(x, mojaNajljubsaPtica)
    
    nadaljuj = input('Pritisni ENTER za ponovni vpis...')