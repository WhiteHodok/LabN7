def find_lis(arr):
    if not arr:
        return []
    if len(arr) == 1:
        return arr

    # Получить наибольшую возрастающую подпоследовательность для оставшейся части массива
    tail_lis = find_lis(arr[1:])

    # Если первый элемент меньше следующего, добавить его в начало наибольшей возрастающей подпоследовательности
    if arr[0] < arr[1] and len(tail_lis) < len(arr[1:]):
        return [arr[0]] + tail_lis
    else:
        return tail_lis

arr = [3, 1, 5, 2, 6, 4, 9]
print("Исходный массив:", arr)
print("Наибольшая возрастающая подпоследовательность:", find_lis(arr))
