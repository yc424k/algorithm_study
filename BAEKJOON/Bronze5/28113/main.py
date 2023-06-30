# A 마지막 버스
# B 마지막 전철
# N 승강장까지 가는길
# N이 B보다 커야됨

num_n , num_a, num_b = map(int, input().split())

if num_a == num_b:
    print("Anything")
elif num_a > num_b:
    print("Subway")
else:
    print("Bus")