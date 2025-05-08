
#Exercise 5 - Snake Water Gun

'''
Snake, Water and Gun is a variation of the children's game "rock-paper-scissors" where players use hand gestures to represent a snake, water, or a gun. The gun beats the snake, the water beats the gun, and the snake beats the water. Write a python program to create a Snake Water Gun game in Python using if-else statements. Do not create any fancy GUI. Use proper functions to check for win.
'''


import random
#/ List of possible choices in the game
swg = ["snake","water","gun"]

#/ Instead of taking input from users, we'll randomly select choices for player1 and player2

# player1 = input("Enter snake,water or gun:")
# player2 = input("Enter snake,water or gun:")

player1 = random.choice(swg)
player2 = random.choice(swg)

#/ Print the choices made by player1 and player2
print("Player1 choose: ",player1)
print("Player2 choose: ",player2)

#/ Check if both players have made the same choice
if player1 == player2:
    print("Draw")
#/ Check if player1 has chosen snake
elif player1 == "snake":
    #/ If player2 has chosen water, player1 wins; otherwise, player2 wins
    if player2 == "water":
        print("Player 1 wins")
    else:
        print("Player 2 wins")
#/ Check if player1 has chosen water
elif player1 == "water":
    #/ If player2 has chosen snake, player2 wins; otherwise, player1 wins
    if player2 == "snake":
        print("Player 2 wins")
    else:
        print("Player 1 wins")
#/ Check if player1 has chosen gun
elif player1 == "gun":
    #/ If player2 has chosen snake, player1 wins; otherwise, player2 wins
    if player2 == "snake":
        print("Player 1 wins")
    else:
        print("Player 2 wins")
else:
    #/ If player1's choice is invalid, print an error message
    print("Invalid input")









    