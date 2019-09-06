a = 0x10
x = 0x01020304
def BitPrint(i):
    for j in range(7, -1, -1):
    	print('1' if(i & (1<< j)) else '0', end="")
        

print("%d= " %a, end="")
BitPrint(a)
print()

print("%08x = " %x, end="")

for i in range(0,25,8):
    BitPrint(x>>i)
    print(end="")
