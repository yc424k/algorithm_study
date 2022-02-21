price, count, money = map(int, input().split())
print(price*count-money) if price*count > money else print(0)