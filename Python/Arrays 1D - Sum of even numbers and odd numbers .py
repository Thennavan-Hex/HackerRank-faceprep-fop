n1 = int(input())
array1 = [int(input()) for _ in range(n1)]

even = 0
odd = 0

for element in array1:
    if element % 2 == 0:
        even += element
    else:
        odd += element

print("The sum of the even numbers in the array is", even)
print("The sum of the odd numbers in the array is", odd)
