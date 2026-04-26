# power of 2
class solution:
  def power(self , n:int)->bool:
   if n<=0:
    return False
   if n==1:
    return True
   if n%2!=0:
    return False
   return self.power(n/2)
obj=solution()
n=5
  
