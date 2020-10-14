'''
This is a python program to reverse the input string in another way using loops.
Normal would have been :

reverse = original[::-1]

'''
def reverse(x):
    rev = ""
    for i in range(len(x)):
        rev += x[len(x)-i-1]

    return rev