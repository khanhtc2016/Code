



def nhiphan():
  a=int(input("nhap so he thap phan: "))
  s=""
  while(a!=0):
    s+= str(a % 2)
    a=a//2
    print(s[::-1])




nhiphan()