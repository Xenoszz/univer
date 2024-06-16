import math

def cal_pi(terms):
    pi = 3.0
    for i in range(1, terms + 1):
        series = 2 * i * (2 * i + 1) * (2 * i + 2)
        term = 4 / series if i % 2 == 1 else -4 / series
        pi += term
    return pi


inp = int(input())
sum = cal_pi(inp)
sum = math.pi - sum
print('%.15f'%(sum))