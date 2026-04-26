
A = [8, 13, 13, 14, 15, 17, 17, 19]
freq = {}
for num in A:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1
max_freq = max(freq.values())
modes = []
for key, value in freq.items():
    if value == max_freq and max_freq > 1:
        modes.append(key)
if modes:
    for m in modes:
        print(f"{m} is a mode")
else:
    print("No mode found")
