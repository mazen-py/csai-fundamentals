"""
Program Name: Sphere Volume Calculator
Description: A simple program that calculates the volume of a sphere based on user input.
Concepts used: User Input, Type Casting (int), Arithmetic Operations, and the Math module.
"""
import math

radius = int(input("Enter the radius: "))
volume = (4/3 * math.pi * (radius**3))
print("The volume is:", volume)
