try:
    for b in range(6,6+3,3):
        if b>6:
            continue
        print(b, end=' ')
        b=-3
        if b>=6:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
except: print('error')
