# q = int(input())
# prime = []
# is_prime = True
# for i in range(2, q):
#     if q % i == 0:
#         is_prime = False
#         prime.append(i)
#         prime.append(int(q/i))
#         break

# if is_prime:
#     print(q, "is prime")
# else:
#     if len(prime) == 1:
#         print(q, "=", prime[0], "x", prime[0])
#     else:
#         print(q, "=", prime[0], "x", prime[1])


n = int(input())

k = 2
while k <= n:
    if n % k == 0:
        break
    k += 1

if k == n:
    print("prime number")
else:
    print()