class car :
  color="black"
  @staticmethod 
  def start():
    print("car started..")

  @staticmethod
  def stop() :
    print("car stop..")

class toyotacar(car) : 
    def __init__(self , brand) :
       self.name=brand

# car1=toyotacar("fortuner")
# car2=toyotacar("safaari")
# print(car1.color)
# print(car2.start())
class fortuner(toyotacar) :
   def __init__(self , type):
      self.type=type

car1=fortuner("electic")
car1.start()      