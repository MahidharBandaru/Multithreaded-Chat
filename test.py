samples = 16
total = 0.0
maxi = 0.0
l = []
for i in range(samples):
    delay = input()
    print(delay)
    maxi = max(maxi, delay)
    total += delay
    l.append(delay)

avg = total/samples
l.sort()
median = 0.0
n = len(l)
if n%2 == 1:
    median = l[n/2]
else:
    median = (l[n/2] + l[(n/2) - 1])/2.0
print (total, "total")
print (avg, "avg")
print (maxi, "max")
print (median, "median")
