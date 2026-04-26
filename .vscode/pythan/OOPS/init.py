class student :

  def __init__(self , name , roll):
    self.name=name
    self.roll=roll
    # print("adding new student in database..")

  def welcome(self) :
    print("wlcome student : " , self.name)

    def get_marks(self) :
      return self.marks  


s1=student("karan" , 98)
s1.welcome()
print(s1.get_marks())
print(s1.name )
print(s1.roll)
s2=student("rohit" , 77)
print(s2.name , s2.roll)    