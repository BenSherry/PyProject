def bubble_sort(wait_sort):
    length = len(wait_sort)
    for i in range(length-1):
        swapped = False
        for j in range(length-i-1):
            if wait_sort[j] > wait_sort[j+1]:
                wait_sort[j], wait_sort[j+1] = wait_sort[j+1], wait_sort[j]
                swapped = True
        if not swapped:
            break
    return wait_sort


if __name__ == "__main__":
    original_number = input("input numbers and divide by space\n").strip()
    wait_sort = [int(item) for item in original_number.split(" ")]
    '''
    equal to 
    wait_sort = []
    for item in original_number.split(" "):
        wait_sort.append(int(item))
    '''
    print(bubble_sort(wait_sort))
