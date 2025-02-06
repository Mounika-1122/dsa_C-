def linear(arr, target):
    for i in range(len(arr)):
        if arr[i]==target:
            return i
    return -1
arr=[3,2,8,5]

print(linear(arr, 8))
        
        