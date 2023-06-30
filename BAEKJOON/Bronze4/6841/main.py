# CU	see you
# :-)	I’m happy
# :-(	I’m unhappy
# ;-)	wink
# :-P	stick out my tongue
# (~.~)	sleepy
# TA	totally awesome
# CCC	Canadian Computing Competition
# CUZ	because
# TY	thank-you
# YW	you’re welcome
# TTYL	talk to you later
while True:
    try:
        name = input()
        if name == 'CU':
            print('see you')
        elif name == ':-)':
            print('I’m happy')
        elif name == ':-(':
            print('I’m unhappy')
        elif name == ';-)':
            print('wink')
        elif name == ':-P':
            print('stick out my tongue')
        elif name == '(~.~)':
            print('sleepy')
        elif name == 'TA':
            print('totally awesome')
        elif name == 'CCC':
            print('Canadian Computing Competition')
        elif name == 'CUZ':
            print('because')
        elif name == 'TY':
            print('thank-you')
        elif name == 'YW':
            print('you’re welcome')
        elif name == 'TTYL':
            print('talk to you later')
        else:
            print(name)
    except:
        break
