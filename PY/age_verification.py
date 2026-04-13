"""
Program Name: Age Verification Check
Description: Takes an age input from the user and uses conditional logic to check if they meet a minimum age requirement.
Concepts used: Type Casting, Relational Operators (>=), and If/Else Conditions.
"""
age = int(input("How old are you? "))

if age >= 20:
    print("Access Granted. Welcome!")
else:
    print("Access Denied. You must be at least 20 years old.")
