def delete_last(arr):
    removed = arr.pop()
    return removed


def main():
    arr = [4, 6, 21, 14, 3]
    print("Original array:", arr)
    delete_last(arr)
    print("Array after deletion:", arr)


if __name__ == "__main__":
    main()
