#!/usr/bin/env python
# coding=utf-8
x = 50

def func(x):
    print('x is', x)
    x = 2
    print('Changed local x t0 ', x)

func(x)
print('x is still', x)
