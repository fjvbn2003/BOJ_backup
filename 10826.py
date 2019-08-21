
arr = [0,1,1]
n = int(input())

t = 3;
while(True):
    if(n<t):
        break
    arr.append(arr[t-1]+arr[t-2])
    t+=1
print(arr[n])
