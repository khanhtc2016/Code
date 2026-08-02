b=[5,7,9,10,4]
ten=['An','Binh','cuong','danh','nam']
for i in range(0,len(b)-1):
    for j in range(0,len(b)-1):
        if( b[j]>b[j+1]):
            temp=b[j]
            b[j]=b[j+1]
            b[j+1]=temp
            tem=ten[j]
            ten[j]=ten[j+1]
            ten[j+1]=tem

print(b,"\n",ten)
