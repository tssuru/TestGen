try:
    for b in range(6,6+4,-2):
        if b<=8:
            continue
        print(b, end=' ')
        b=8
    else:
        print(13, end=' ')
    print(b, end=' ')
except: print('error')
