"""
Program Name: Status Checker
Description: Asks the user how they are doing and responds based on their specific string input.
Concepts used: String Input and If/Else Conditions.
"""
status = input("How are you doing today? (Type 'good' or 'bad'): ")

if status == "good":
    print("Glad to hear that!")
else:
    print("Hope things get better soon!")
