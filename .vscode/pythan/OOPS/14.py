class fruits:
  count=0

  def __init__(self,name="",  size=0 , color=""):
    self._color=color
    self._size=size
    self._name=name
    fruits.count +=1
  def display(self):
    print(self._name , self._size , self._color)
    print(fruits.count)

f1=fruits("banana" , 5 , "yellow")
f2=fruits("apple"  , 4, "red")
f3=fruits("strowberry" , 10 , "red")
print(fruits.count)
    