# inp = input()
inp = "beautiful"
word = "aeiou"
sum = 0
checkword = False
for i in inp:
    for k in i:
        if k in word:
            if not checkword:
                sum +=1
                checkword = True
        else:
            checkword = False


print(sum)