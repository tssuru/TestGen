try:
    for a in range(-2,-2+6,-3):
        if a<8:
            continue
        print(a, end=' ')
        a=-8
    else:
        print(13, end=' ')
    print(a, end=' ')
except: print('error')
