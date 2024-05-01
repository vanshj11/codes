def heapify(arr, n, i):
    l = 2*i +1
    r = 2*i +2
    largest = i

    if l<n and arr[l] > arr[i]:
        largest = l

    if r<n and arr[r] > arr[largest]:
        largest = r

    if largest != i:
        (arr[i], arr[largest]) = (arr[largest], arr[i])
        heapify(arr, n, largest)


def heap_sort(arr):
    n = len(arr)

    for i in range (n//2, -1, -1):
        heapify(arr, n, i)

    for i in range (n-1, 0, -1):
        (arr[i], arr[0]) = (arr[0], arr[i])
        heapify(arr, i, 0)

arr = [60, 20, 40, 70, 30, 10]
n = len(arr)
heap_sort(arr)
for i in range (n):
    print(arr[i], end=' ')