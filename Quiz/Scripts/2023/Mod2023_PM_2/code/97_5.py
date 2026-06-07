try:
    for b in range(9,9+4,-3):
        if b>=3:
            continue
        print(b, end=' ')
        b=-1
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
