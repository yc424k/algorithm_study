x,y,w,h = map(int,input().split())

x = x if x < w-x else w-x
y = y if y < h-y else h-y 
print(y if y < x else x)