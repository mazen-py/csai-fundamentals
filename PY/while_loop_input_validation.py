"""
Program Name: User Input Validation Loop
Description: A while loop that continues to run and ask for input until the user provides the correct exit phrase.
Concepts used: While Loops and String Comparison (!=).
"""
user_input = '09/01/2008'

while user_input != '09/01/2007':
    user_input = input('Do you want to stop? (Enter the correct date to exit): ')
    
print("Correct! Loop ended.")
