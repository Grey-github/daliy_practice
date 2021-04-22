#!/usr/bin/env python
# coding=utf-8
class Person:
    def __init__(self, name):
        self.name = name


    def say_hi(self):
        print('Hello , my name is', self.name)


p = Person('Swaroop')
p.say_hi()
#前面两行同时可以写作
#Person('Swaroop').say_hi()
