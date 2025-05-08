row = int(input("enter the number of rows: "))

for i in range(1,row+1):
    for j in range(0,i-1):
        print(i,end=' ')
    print(i)

print('\n')

for i in range(1,row+1):
    for j in range(1,i+1):
        print(j,end=' ')
    print()