while True:
    try:
        name = input()
        table = str.maketrans('eiEI', "ieIE")
        print(name.translate(table))
    except:
        break
