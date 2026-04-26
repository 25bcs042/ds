class complex:

  def __init__(self , r=0.0 , i=0.0):
    self._real = r
    self._image=i
  def _eq_(self ,other):
    if self._real==other._real and self._image==other._image:
      return True
    else:
      return False
c1=complex(1.1 , 2.0)
c2=complex(2.1 ,3.9)
c3=c1
if c1==c2:
  print("attributes are same : ")
else:  
  print("atrributes of c1 and c2 are not same ")
if type(c1)==type(c3):
  print("c1 and c3 are same type")
else:
  print("c1 amd c3 are not same type ")
if c1 is  c3:
  print("c1 and c3 pointing the same object")
else:
  print("c1 and c3 are not pointing the same object")  
  

