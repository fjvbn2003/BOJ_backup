a = 0x86
key = 0xAA
def BitPrint(i):
    for j in range(7, -1, -1):
    	print('1' if(i & (1<< j)) else '0', end="")
        
print("a ==> ", end="")
BitPrint(a)
print()

print("a^=key ==> ", end="")
a ^= key
BitPrint(a)
print()


print("a^=key ==> ", end="")
a ^=key
BitPrint(a)
print()
