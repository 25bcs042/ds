class number:
  def set_number(self,n):
    self._num=n
  def get_number(self):
    return self._num 
  def print_number(self):
    print(self._num)
  def isnegative(self):
    if self._name<0:
      return True
    else:
      return False
  def divsibleby(self,n):
    if n==0:
      return  False
    elif self._num%n==0:
      return True
    else:
      return False
  def absolute(self):
    if self._num>=0:
      return self._num
    else:
      return -1*self._num

x =number()
x.set_number(-1234)
x.print_number()
if x.divsibleby(5)==True:
  print("5 divides" , x.get_number())
else:
  print("5 does not devides" , x.get_number()) 