def printit(): # globabal funtion
  print("opener")
  print("hello world there exist a men")
class Message:
  def display(self,msg): 
    printit()
    print(msg)
  def show():
    printit()
    print("hello")

printit()
m=Message()
m.display("good morning") 
Message.show()       