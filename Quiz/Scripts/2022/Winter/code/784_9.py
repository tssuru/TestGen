try:
    for b in range(-7, -2, 2):
        if b >= -5:
            continue
            print(b, end=' ')
        if b >= -4:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
