try:
    for b in range(-9,-9+5,3):
        if b<4:
            continue
        print(b, end=' ')
        b=-9
        if b>=5:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
except: print('error')
