# Matrix Multiplication using Lists

 A (2x3)
A = [
    [1, 2, 3],
    [4, 5, 6]
]

 B (3x2)
B = [
    [7, 8],
    [9, 10],
    [11, 12]
]
initialization (2x2)
result = [
    [0, 0],
    [0, 0]
]

# Matrix multiplication logic
for i in range(len(A)):          # rows of A
    for j in range(len(B[0])):   # columns of B
        for k in range(len(B)):  # columns of A / rows of B
            result[i][j] += A[i][k] * B[k][j]

# Display result
print("Resultant Matrix:")
for row in result:
    print(row)
