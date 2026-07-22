s=input()
s1='' 
for i in s:
    if not(i in s1):
        s1= s1+i
for i in range(len(s1)):
    dem=0
    for j in range(len(s)):
        if s[j]==s1[i]:
            dem+=1
    print(s1[i],dem)

s=input() 
dem={}
for ch in s:
    if ch in dem:
        dem[ch]+=1
    else:
        dem[ch]=1
for k in dem:
    print(k+" ",dem[k])

a=input()
i=len(a)-1
j=0
dx=True
while j<i:
    if a[j]!=a[i]:
        dx=False
        break
    else:
        j+=1
        i-=1
    
if dx:
    print('yes')
else:
    print('no')

