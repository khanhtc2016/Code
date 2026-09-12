n=int(input())
s=0
j=1
for i in range(1,n+1):
  s+=1/j
  j+=1
print(round(s,3))