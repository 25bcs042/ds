def binary(arr, left, right, target):
    if left > right:
        return -1

    mid = (left + right) // 2

    if arr[mid] == target:
        return mid
    elif target < arr[mid]:
        return binary(arr, left, mid - 1, target)
    else:
        return binary(arr, mid + 1, right, target)


number = [2, 4, 10, 44, 45, 52, 55]

print(binary(number, 0, len(number) - 1, 10))