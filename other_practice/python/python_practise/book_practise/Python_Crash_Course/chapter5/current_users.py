current_users = ["Frank", "Betty", "Hary", "Bob", "Leon"]
new_users = ["Bob", "Leon", "Andy", "Charles", "David"]
for new_user in new_users:
	for current_user in current_users:
		if current_user.lower() == new_user.lower():
			print(new_user + " has been used.")
		else:
			print("This user name has not been userd")
			
