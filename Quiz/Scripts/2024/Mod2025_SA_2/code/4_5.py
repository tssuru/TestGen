try:
    for b in range(2,2+2,3):
        if b>=6:
            continue
        print(b, end=' ')
        b=0
        if b<=7:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
except: print('error')
