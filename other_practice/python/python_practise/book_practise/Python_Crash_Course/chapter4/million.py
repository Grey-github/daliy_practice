#突发奇想，我在C++中用同样的for循环做了测试，
#发现Python的输出速度要快许多，尽管C++的程序先运行，Python仍先输出结束
numbers = list(range(1, 100001))
for number in numbers:
	print(number)
