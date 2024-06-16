from math import sqrt
num = float(input())
x = pow(num, 3) 
sum = x/(6*sqrt(2))
if sum < 0:
    sum = sum * (-1)
    print('{:.4f}'.format(sum))

else:
    print('{:.4f}'.format(sum))

