try:
    for b in range(2, -5, -2):
        if b <= -2:
            break
            print(b, end=' ')
            b = -3
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
