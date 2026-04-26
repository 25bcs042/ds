class employe:
  def set_data(self,n,a,s):
    self.__name = n
    self.__age=a
    self.__salary=s
  def display(self):
      print(self.__name, self.__age ,self.__salary)
  def __init__(self , n="" , a=0 , s=0.0):
     self.__name = n
     self.__age=a
     self.__salary=s
  def __del__(self):
     print("deleting object" +str(self))

e1=employe()
e1.set_data("suresh" , 30 , 40000)
e1.display()
e2=employe("karn" , 25 , 100000)
e2.display()
