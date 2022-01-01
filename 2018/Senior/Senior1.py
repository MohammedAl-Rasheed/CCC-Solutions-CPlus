n = int(input())
distinct = []

for i in range(n):
  distinct.append(float(input()))

distinct = [int(i) for i in distinct]
distinct.sort()

#[16, 0, 1, 2, 15]
#[0, 4, 10, 15, 16]

Total = 0

for i in range(len(distinct)-2):
  sum1 = distinct[i+1] + distinct[i] #25
  mid1 = sum1/2 #12.5
  sum2 = distinct[i+1] + distinct[i+2] #31
  #else:
    #sum2 = distinct[i] + distinct[i-1]
  mid2 = sum2/2 #15.5
  Temp = mid1 - mid2 #-3
  if Temp < 0: 
    Temp = Temp * (-1)#3
  if Temp < Total or Total == 0:
    Total = Temp#3

print(Total)
