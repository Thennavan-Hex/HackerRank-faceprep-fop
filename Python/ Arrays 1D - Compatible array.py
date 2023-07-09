n1 = int(input())
array1 = [int(input()) for _ in range(n1)]

n2 = int(input())
array2 = [int(input()) for _ in range(n2)]

compatible = True

if n1 != n2:
    compatible = False
else:
    for i in range(n1):
        if array1[i] < array2[i]:
            compatible = False
            break

if compatible:
    print("Compatible")
else:
    print("Incompatible")