list = ["Alice", "Andy", "Bob", "Betty", "Charles"]
greeting_words = "would you like to have dinner with me tonight?"
print(list[0] + ", " + greeting_words)
print(list[1] + ", " + greeting_words)
print(list[2] + ", " + greeting_words)
print(list[-2] + ", " + greeting_words)
print(list[-1] + ", " + greeting_words)
print(list[0] + " can't come tonight")
list[0] = "Tom"

print("\n")
print(list[0] + ", " + greeting_words)
print(list[1] + ", " + greeting_words)
print(list[2] + ", " + greeting_words)
print(list[-2] + ", " + greeting_words)
print(list[-1] + ", " + greeting_words)

list.insert(0, "Einstein")
list.insert(3, "Newton")
list.append("Hawkin")

print("\n")
print(list[0] + ", " + greeting_words)
print(list[1] + ", " + greeting_words)
print(list[2] + ", " + greeting_words)
print(list[3] + ", " + greeting_words)
print(list[-4] + ", " + greeting_words)
print(list[-3] + ", " + greeting_words)
print(list[-2] + ", " + greeting_words)
print(list[-1] + ", " + greeting_words)
print("\n")
print("I sincerely apologize for thar " + "\n" + 
"the tables thar I booked The table can't be delivered in time")

print("\n")
pop_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")
pop_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")
pop_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")
pop_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")
pop_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")
op_invitee = list.pop()
print(pop_invitee + ", " + " I am sorry that I can't invite you for dinner tonight")

print("\n")
print(list[0] + " ," + "Could you come to my home to have dinner with tonight?")
print(list[1] + " ," + "Could you come to my home to have dinner with tonight?")

del list[1]
del list[0]
print(list)


