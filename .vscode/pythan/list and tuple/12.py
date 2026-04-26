import random
a=[]
i=1
while i<=20:
 num=random.randint(10,100)
 a.append(num)
 i +=1
print(a)

for num  in a:
 if num>20 and num<50:
  a.remove(num)

print(a)
#code : how to take a random number in list