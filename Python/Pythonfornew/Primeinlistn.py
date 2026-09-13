n=int(input())
def is_prine(n):
  if(n<2):
    return False
  if(n==2):
    return True
  if(n%2==0):
    return False
  
  else:
    i=3
    while(i*i<=n):
      if(n%i==0):
        return False
      i+=2
  return True
dem=0
for i in range(1,n+1):
  if(is_prine(i)):
    dem+=1
print(dem)
    
    