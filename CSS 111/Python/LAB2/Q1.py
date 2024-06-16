import math
hour = int(input())
minute = int(input())
outhour = int(input())
outminute = int(input())

sumhour = outhour - hour
summinute = outminute - minute

summoney = 0

if (sumhour >= 8):
    print(400)
elif(summinute <= 15):
        print(0)
elif(summinute > 15):
        print(20)
else:
    if(minute > 1):
        sumhour += 1
    if(outminute > 1):
        sumhour += 1
    for i in range(1, sumhour+1):
        if(i >= 4):
            summoney += 40
        elif(i <= 3):
            summoney += 20
print(summoney)






