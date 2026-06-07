try:
    for d in range(0, 9, 3):
        if d > 4:
            break
            print(d, end=' ')
            d = 3
    else:
        print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
