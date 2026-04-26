class Acount :
  def __init__(self , bal ,  acc):
    self.balance = bal
    self.account_no=acc

  def debit(self , amount):
      self.balance -= amount
      print("rs" , amount , "was credited")
      print("total balance =" , self.balance)


  def credit(self , amount):
     self.balance +=amount
     print("rs"  , amount , "was credited")
     print("total balance =" , self.balance)  

acc1 = Acount(10000 ,  1015010328036)
acc2=Acount(50000 , 101510323741)
# print(acc1.balance)
# print(acc1.account_no) 
acc1.debit(1000)
acc1.credit(2000)
acc2.credit(5000)
