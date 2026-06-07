try:
    for d in range(4, 15, 3):
        if d >= 9:
            continue
            print(d, end=' ')
        if d <= 10:
            break
    else:
        print(d, end=' ')
    print(d, end=' ')
    
except: print('error')
