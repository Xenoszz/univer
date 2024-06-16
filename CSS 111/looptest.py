# for i in range(1,100):
#     print(i, end=' ')


# sum = 0
# n = 0
# while True:
#     x  =float(input(">> "))
#     if x<0:
#         break
#     sum += x
#     n += 1
# print("Averagee =",sum/n)

n = 50
for k in range(2,n):
    for m in range(2,k+1):
        if k%m == 0 :
            break
        if m==k:
            print(k)