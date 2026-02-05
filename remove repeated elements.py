arr=[10,20,30,20,20,40,50]
key=20
index=0
size=len(arr)

for i in range(size):
    if arr[i]!=key:
        arr[index]=arr[i]
        index+=1

size=index

print("Result:",arr[:size])
