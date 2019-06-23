from bubble_sort import  bubble_sort
DEFAULT_BUCKET_SIZE = 5 
'''
that means the number's range in a bucket
'''
def bucket_sort(wait_sort,bucket_size = DEFAULT_BUCKET_SIZE):
    if len(wait_sort) == 0:
        return wait_sort
    
    max_num, min_num = (max(wait_sort), min(wait_sort))
    buckets_num = int((max_num - min_num) // bucket_size) +1

    # build empty bucket
    buckets = [[] for _ in range (int(buckets_num))]

    # put every number in the right bucket
    for i in range(len(wait_sort)):
        position = int((wait_sort[i] - min_num) // bucket_size)
        buckets[position].append(wait_sort[i])

    # sort every bucket or use system sorted function
    return bubble_sort([buckets[i][j] for i in range(len(buckets))
                                 for j in range(len(buckets[i]))])


if __name__ == "__main__":
    original_number = input("input numbers and divide by space\n").strip()
    wait_sort = [int(item) for item in original_number.split(" ")]
    '''
    equal to 
    wait_sort = []
    for item in original_number.split(" "):
        wait_sort.append(int(item))
    '''
    print(bucket_sort(wait_sort))