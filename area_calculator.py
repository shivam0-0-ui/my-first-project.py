# first_project01
print("1) Rectangle")
print("2) triangle")
print("3) Square")
print("4) Circle")
print("5) Quit")
 
x=int(input("enter the shape:"))
if x==1:
 length=float(input("enter the length:"))
 breath=float(input("enter the breath:"))
 area= length*breath # this will give area of rectangle
 print(area)
 
elif x==2:
 base=float(input("enter the base:"))
 height=float(input("enter the height5:"))
 area=0.5*base*height #this will give area of triangle
 print(area)
elif x==3:
 side=float(input("enter the side: "))

 area=side*side #this will give area of square
 print(area)
elif x==4:
 
 radius=float(input("enter the value of radius:"))
 area= 3.14*radius**2 #this will give area of circle
 print(area)
elif x == 5:
    print("Goodbye!")
else:
 print("invalid ")
