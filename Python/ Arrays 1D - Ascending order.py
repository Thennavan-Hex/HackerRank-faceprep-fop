n1 = int(input())
array1 = [int(input()) for _ in range(n1)]

sorted_array = sorted(array1)
print("The Sorted array is:")
for element in sorted_array:
    print(element)
