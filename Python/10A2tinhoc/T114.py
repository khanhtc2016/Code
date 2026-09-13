n=int(input())
ds=[]
for i in range(n):
  ten=input("ten ban thu " + str(i+1) + ": ")
  ds.append(ten)
for i in range(len(ds)):
  print(ds[i])
#bai 2 
dsa=[]
sum=0
n=int(input())
for i in range(n):
  num=int(input())
  sum+=num
  dsa.append(num)
print(sum)
print(sum/n)
for i in range(n):
  print(dsa[i])