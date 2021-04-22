#创建一个字典，在其中存储三条大河流及其流经的国家。
#其中一个键—值对可能是'nile': 'egypt' 。
#使用循环为每条河流打印一条消息，如“The Nile runs through Egypt.”。
#使用循环将该字典中每条河流的名字都打印出来。
#使用循环将该字典包含的每个国家的名字都打印出来。
river_country = {
	'nile': 'egypt',
	'yellow river': 'china',
	'ganges': 'india',
	'senie': 'france',
	'rhine': 'german',
	}
for river, country in river_country.items():
	print("The " + river.title() + "runs through " + country.title())
for river in river_country.values():
	print(river.title())
for country in river_country.keys():
	print(country.title())
