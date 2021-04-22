#以整洁的方式打印每个词汇及其含义。
#为此，你可以先打印词汇，在它后面加上一个冒号，
#再打印词汇的含义；也可在一行打印词汇，再使用换行符（\n ）插
#入一个空行，然后在下一行以缩进的方式打印词汇的含义。
vocabulary = {
	'list': 'a database containing an ordered array of items ',
	'tuple': 'a row of values in a relational database',
	'conditional expression': 'judge which is true or false',
	'variable': 'store the value',
	'object': 'the real thing in the world',
	'binary': 'Only use 1 and 0 to calculate',
	'source code': 'The characters that we write',
	'cycle': 'Do the same thing repeatedly',
	'input': 'The users input their characters',
	'key': 'The name of the value in the vocabulary',
	}
for term, meaning in vocabulary.items():
	print(term + ": " + meaning)
	
