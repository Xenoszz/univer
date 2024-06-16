numberlist = []
for i in range(5):
    num = int(input())
    numberlist.append(num)
    if num == 0:
        break
sumpostive = 0
sumnegative = 0
for i in numberlist:
    if i > 0:
        sumpostive += i
    else:
        sumnegative += i
print(sumpostive, sumnegative)
