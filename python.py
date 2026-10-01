data = ["ram", "shyam", "mohit", "rohit", "om"]

data.reverse()
print(data)

data.sort()
print(data) 

data.sort(reverse=True)
print(data)

data.sort(key=len)
print(data)

data.sort(key=len, reverse=True)
print(data)
