soongsil, korea, hanyang = map(int, input().split())
club = {'Soongsil': soongsil, 'Korea': korea, 'Hanyang': hanyang}

if club['Soongsil'] + club['Korea'] + club['Hanyang'] >= 100:
    print('OK')
else:
    print(min(club, key=club.get))
