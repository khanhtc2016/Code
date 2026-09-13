s=input()
a=s.split()
print(len(a))
b=[]

for i in a:
  b.append(int(i))

for i in range(len(b)):
  print(b[i],end=" ")
