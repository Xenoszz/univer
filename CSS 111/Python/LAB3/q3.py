import re

inp = input()
inpword = input()
inpchange = input()

sum = re.sub(inpword, inpchange, inp)
print(sum)
