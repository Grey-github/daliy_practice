users = ["Eric", "Frank", "Christina", "admin", "Divergent"]
for user in users:
	if user == "admin" :
		print("Hello "+user+", would you like to see a status report?")
	else:
		print("Hello " + user + ", thank you for logging in again.") 
users.pop()
users.pop()
users.pop()
users.pop()
users.pop()
print(users)
if users != True:
	print("We need to find some users!")

