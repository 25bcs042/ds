class Student :
  def __init__(self ,name , marks):
    self.name=name
    self.marks=marks

  def get_avg(self) :  
    sum=0
    for val in self.marks :
      sum +=val
    print("hi" , self.name , "your avg marks is :" , sum/3)

s1=Student("karn " , [98,56,78])
s1.get_avg()      

s1.name = "rahul"
s1.get_avg()
s2= Student ("vivek" , [89,78,90])
s2.get_avg()
    
    