words = ["Jammu", "was", "a", "State", "Delhi", "was", "a", "State"]
for i in range(len(words)):
    if words[i] == "State":
        words[i] = "UT"
print(words)
