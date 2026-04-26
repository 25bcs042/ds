def fact(n):
  if(n==0 or n==1):
    return 1
  return  n*fact(n-1)

print(fact(4))  
print(fact(10))
print(fact(3))