# #WAP to find the factorail of n. 
# n = int(input("enter the number : "))
# fact = 1
# for i in range(1 , n+1):
#   fact = fact *i
# print( "the factorail is : " ,fact)
def  cfact(n):
  fact = 1
  for i in range (1 ,n+1):
    fact= fact*i
  print(fact)

cfact(5)
cfact(6)

  