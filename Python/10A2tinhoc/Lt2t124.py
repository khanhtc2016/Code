a=['0','1','2','3','4','5','6','7','8','9']
s=input()
ck=False
for i in range(0,len(s)):
  if( s[i] in a):
    ck=True
    break
print("Yes" if ck else "no")

