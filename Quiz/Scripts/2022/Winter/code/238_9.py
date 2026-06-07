try:
    for b in range(2):
        if b <= 1:
            break
            print(b, end=' ')
            b = 0
    else:
        print('end', end=' ')
    print(b, end=' ')
    
except: print('error')
