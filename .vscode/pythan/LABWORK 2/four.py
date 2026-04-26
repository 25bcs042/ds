
a = [10, 20, 30, 40, 50]
print("Original List:", a)
print("\nAccess using negative indexing:")
print("Last element (a[-1]):", a[-1])
print("Second last element (a[-2]):", a[-2])
print("Third last element (a[-3]):", a[-3])
a[-1] = 99
print("\nAfter modifying last element:", a)
print("\nSlicing with negative indexing:")
print("Last 3 elements:", a[-3:])
print("From -4 to -2:", a[-4:-1])
print("\nReversed List:", a[::-1])