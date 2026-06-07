try:
    for b in range(-1, 10, 3):
        if b >= 4:
            continue
            print(b, end=' ')
        if b > 5:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
