# -*- coding: utf-8 -*-

EPS = 0.00000001

x = 0.0
y = 0.0
h = 0.01
dx = 1.0
xmax = 10.0 
ddx = 0.0

def func_f(x):  
    return 2.0 * x

print "   X\t\t   Y"

while True:
    if x >= (ddx - EPS):
        ddx += dx
        print '%7.4f' % x,
        print '\t' + '%7.4f' % y
    
    y += h * func_f(x)
    x += h

    if x > xmax:
        break
