#  s="abcde"
#  s1="edcba"
#  if len(s)==len(s1) and s1 in s+s1:
#    print("rotional")
#  else :
#    print("irrotianal")
# for i in range(1,11):
#   print(i)
# n =int(input("enter the number : "))
# sum=0
# for  i in range(1,n+1):
#   sum=sum+i

# REQUEST FOR RETURN AND REFUND  ORDER ID TH21644
# n = int(input("enter the number :"))
# for i in range(1,11):
#   print(n*i)
# n = int(input("enter a number :"))
# count =0
# if n==0:
#   count=1
# else:
#   while n>0:
#     n=n//10
#     count +=1
# print(count)    

# n=input("enter the number L: ")
# for i in range(1,n+1):
#   print(i)
#   i -=1
# Quiz Game System

# Dictionary: Questions and Answers
questions = {
    "What is the capital of India?": ("Delhi", ["Delhi", "Mumbai", "Chennai", "Kolkata"]),
    "2 + 2 = ?": ("4", ["2", "3", "4", "5"]),
    "Which language is used for Python?": ("Programming", ["Scripting", "Programming", "Markup", "Design"]),
    "Who is the father of computer?": ("Charles Babbage", ["Newton", "Einstein", "Charles Babbage", "Tesla"])
}

# Set: to store attempted questions
attempted = set()

# List: to store scores
scores = []

# Function to start quiz
def start_quiz():
    score = 0
    
    for q, (answer, options) in questions.items():
        print("\n" + q)
        
        # List used for options
        for i in range(len(options)):
            print(i+1, ".", options[i])
        
        choice = int(input("Enter your answer (1-4): "))
        
        # Tuple used (answer, options)
        if options[choice-1] == answer:
            print("Correct!")
            score += 1
        else:
            print("Wrong! Correct answer is:", answer)
        
        # Set storing attempted questions
        attempted.add(q)
    
    print("\nYour Score:", score)
    scores.append(score)

# Function to show result history
def show_scores():
    print("\nAll Scores:", scores)

# Recursive menu function
def menu():
    print("\n--- Quiz Game ---")
    print("1. Start Quiz")
    print("2. Show Scores")
    print("3. Exit")
    
    choice = int(input("Enter choice: "))
    
    if choice == 1:
        start_quiz()
        menu()   # recursion
    elif choice == 2:
        show_scores()
        menu()
    elif choice == 3:
        print("Thank You!")
    else:
        print("Invalid Choice")
        menu()

# Start program
menu()