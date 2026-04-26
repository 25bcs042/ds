class empolye:
  def set_data(self, n , a, s):
    self.name = n
    self.age = a
    self.salary= s
  def display_data(self):
    print(self.name ,self.age , self.salary)

e1=empolye()
e1.set_data("ramesh" , 30 ,50000)
e1.display_data()    
e2=empolye()
e2.set_data("karan" ,25, 100000)
e2.display_data()