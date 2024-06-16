import math
degree = int(input())
radians = math.radians(degree)
print("{:.3f} {:.3f} {:.3f}".format(math.sin(radians),math.cos(radians),math.tan(radians)),end=' ')
