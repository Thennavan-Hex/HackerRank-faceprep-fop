a1 = int(input(""))
b1 = [int(input()) for _ in range(a1)]

distinct_elements = set(b1)
count = len(distinct_elements)

print(f"There are {count} distinct element in the array.")
