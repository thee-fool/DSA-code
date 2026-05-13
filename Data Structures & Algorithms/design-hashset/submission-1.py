class MyHashSet:

    def __init__(self):
        self.a=[]

    def add(self, key: int) -> None:
        if self.contains(key):
            pass
        else:
            self.a.append(key)

    def remove(self, key: int) -> None:
        if self.contains(key):
            self.a.remove(key)
        else:
            pass

    def contains(self, key: int) -> bool:
        if key in self.a:
            return True
        else: 
            return False


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)