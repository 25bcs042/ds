student = {
  "name" : "karn kumar",
  "subject" : {
    "maths" : 92,
    "python" : 87,
    "ds" : 86,
               
  }
}
print(student)
print(student["subject"])
print(student["subject"]["maths"])
print(student.keys())
print(len(student))
print(len(list(student.keys())))
print(student.values())
print(student.items())
print(student.get("name"))
student.update({"city" :"darbhanga"}) # we can update dictory key
print(student)
print(student.keys())  