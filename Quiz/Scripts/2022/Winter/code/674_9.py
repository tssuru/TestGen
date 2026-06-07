try:
    for b in range(-3, 9, 3):
        if b < 3:
            break
            print(b, end=' ')
            b = 2
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
