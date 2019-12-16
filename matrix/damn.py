a = "red,blue,black"

r, g, b2 = a.split(",")

print(r)
print(g)
print(b2)


z = "red,blue,black"

print(z)

a = z.split(",")

print(z)


w = "marie-jeanne-adrien-marion-george.aimard"
w = w.split("-", 2)
a, b, c = w
print(w)
print(c)
c = c.split(".")
print(c)
h,j = c
print(j)