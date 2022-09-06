#Testiranje boolean vrednosti v Python jeziku

from os import system

while 1==1:

    system('cls')

    bool_one = 5 != 7
    bool_two = 1 + (1 != 2)
    bool_three = 1 + False
    
    print(bool_one)
    print(bool_two)
    print(bool_three)
    
    nadaljuj = input('Pritisni ENTER za ponovni vpis...')
    