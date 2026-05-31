class Solution:
    def maxheap(self, arr, n, i):
            largest = i
            left = 2*i + 1
            right = 2*i + 2

            if left < n and arr[left] > arr[largest]:
                largest = left

            if right < n and arr[right] > arr[largest]:
                largest = right

            if largest != i:
                arr[i], arr[largest] = arr[largest], arr[i]
                self.maxheap(arr, n, largest)


    def heapsort(self, arr):
        n = len(arr)

        for i in range(n//2 - 1, -1, -1):
            self.maxheap(arr, n, i)

        for i in range(n-1, 0, -1):
            arr[0], arr[i] = arr[i], arr[0]
            self.maxheap(arr, i, 0)

    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        self.heapsort(nums)
        

        

    
