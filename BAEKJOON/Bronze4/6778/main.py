# 백준 6778번 문제
# 첫줄 안테나 번호
# 두번쨋줄 눈의 수
# min 3 안테나 and max 4 눈 TroyMartian
# max 6 안테나 and min 2 눈 VladSaturnian
# min 2 안테나 and min 3 눈 GraemeMercurian

antenna = int(input())
eye = int(input())
check = 0
if antenna >= 3 and eye <= 4:
    print('TroyMartian')
    check = 1
if antenna <= 6 and eye >= 2:
    print('VladSaturnian')
    check = 1
if antenna <= 2 and eye <= 3:
    print('GraemeMercurian')
    check = 1
if check == 0:
    print('')
