animals = ["dog", "cat","wolf", "horse", "cow"]
for animal in animals:
	print("A " + animal + " have four legs.")
print("All of these animals have four legs")
print("The first three items in the list are:")
for animal in animals[:3]:
	print(animal)
print("Three items from the middle of the list are:")
for animal in animals[2:5]:
	print(animal)
print("The last three items in the list are:")
for animal in animals[-3:]:
	print(animal)
