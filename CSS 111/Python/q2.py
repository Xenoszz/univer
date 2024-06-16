import math
degree = int(input())
radians = math.radians(degree)
if degree == 30 or degree == 90 or degree == 180 or degree == 270 or degree == 360 or degree == -30 or degree == -90 or degree == -180 or degree == -270 or degree == -360:
    print("{:.1f}".format(math.sin(radians)),end=' ')
else:
    print("{:.3f}".format(math.sin(radians)),end=' ')

if degree == 60 or degree == 90 or degree == 180 or degree == 270 or degree == 360 or degree == -60 or degree == -90 or degree == -180 or degree == -270 or degree == -360:
    print("{:.1f}".format(math.cos(radians)),end=' ')
else:
    print("{:.3f}".format(math.cos(radians)),end=' ')

if degree == 45 or degree == 135 or degree == 180 or degree == 360 or degree == -45 or degree == -135 or degree == -180 or degree == -360:
    print("{:.1f}".format(math.tan(radians)),end=' ')
else:
    print("{:.3f}".format(math.tan(radians)),end=' ')
