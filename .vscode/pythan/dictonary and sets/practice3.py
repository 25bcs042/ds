#WAP to enter marks of 3 subject from the  user and store them inn a dictionary . start with an empty dictionary & add one by one . 
#use subject name as key & marks as value . 
marks = {}
x = int(input("enter phy mark"))
marks.update({"phy" : x})
y = int(input("enter math mark"))
marks.update({"math" : y })
z = int(input("enter chem mark"))
marks.update({"chem" : z} )
print(marks)