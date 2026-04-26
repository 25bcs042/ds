
n = int(input("Enter number of elements: "))
numbers = []
for i in range(n):
    value = float(input(f"Enter element {i+1}: "))
    numbers.append(value)
mean = sum(numbers)
numbers.sort()

if n % 2 == 1:
    median = numbers[n // 2]
else:
    median = (numbers[n // 2 - 1] + numbers[n // 2]) / 2
print("\nNumbers:", numbers)
print("Mean =", mean)
print("Median =", median)
