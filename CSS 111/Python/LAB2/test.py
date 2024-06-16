import math

hour = int(input())
minute = int(input())
outhour = int(input())
outminute = int(input())

sum_minute = outminute - minute
sum_hour = outhour - hour 
sum_minutem = (60 - minute) + outminute
sum = 0

if sum_hour == 1 and sum_minutem <= 15:
    sum = 0
if sum_hour == 1 and sum_minutem > 15:
    sum = 20
elif sum_hour >= 3 and sum_minute > 0:
    sum = 20*3
    sum += (sum_hour-2)*40

elif sum_hour > 8:
    sum = 400

print(sum)