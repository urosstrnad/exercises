#Codecademy Magic 8-ball game
#My solution:
import random
from os import system

while 1==1:

    system('cls')
    """
    name = "Uros"
    question = "Are you feeling okay?"
    answer = ""


    print(name, 'asks:', question)

    answer_a = "Yes - definitely."
    answer_b = "It is decidedly so."
    answer_c = "Without a doubt."
    answer_d = "Reply hazy, try again."
    answer_e = "Ask again later."
    answer_f = "Better not tell you now."
    answer_g = "My sources say no."
    answer_h = "Outlook not so good."
    answer_i = "Very doubtful."

    answer = [answer_a, answer_b, answer_c, answer_d, answer_e, answer_f, answer_g, answer_h, answer_i]
    print("Magic 8-Ball's answer:", random.choice(answer))
    print()
    print()
    """
    #Solution suggested by this exercise:

    name = input("What is your name? ")
    question = input("Ask a question: ")
    answer = ""
    random_number = random.randint(1,11)
    answerText = "Magic 8-Ball's answer:"

    #print('Your random number is:')
    #print(random_number)
    print()

    if name == "":
        print ('Question:', question)
    else:
        print(name, 'asks:', question)

    if random_number == 1:
        print(answerText, "Yes - definitely.")
    elif random_number == 2:
        print(answerText, "It is decidedly so.")
    elif random_number == 3:
        print(answerText, "Without a doubt.")
    elif random_number == 4:
        print(answerText, "Reply hazy, try again.")
    elif random_number == 5:
        print(answerText, "Ask again later.")
    elif random_number == 6:
        print(answerText, "Better not tell you now.")
    elif random_number == 7:
        print(answerText, "My sources say no.")
    elif random_number == 8:
        print(answerText, "Outlook not so good.")
    elif random_number == 9:
        print(answerText, "Very doubtful.")
    elif random_number == 10:
        print(answerText, "Yes.")
    elif random_number == 11:
        print(answerText, "No.")
    else:
        print("Error")

    print()
    input('...Press any key to ask a new question...')