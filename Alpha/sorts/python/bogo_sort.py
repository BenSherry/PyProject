import random


'''
This is not real  sort,just use shuffle to make a chaos over and over again
until the array is sorted
'''

def bogo_sort(wait_sort):
    def is_sorted(wait_sort):
        # in c++ that means for (auto i = 0; i < len -1; i++)
        for i in range(len(wait_sort)-1): 
            if wait_sort[i] > wait_sort[i+1]:
                return False
        return True
    while not is_sorted(wait_sort):
        random.shuffle(wait_sort)
    return wait_sort


if __name__ == "__main__":
    original_number = input("please input number divided by space \n").strip()
    wait_sort = [int(item) for item in original_number.split(" ")]
    print(bogo_sort(wait_sort))