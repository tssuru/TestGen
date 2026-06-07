try:
    for d in range(3, 7):
        if d < 5:
            continue
            print(d, end=' ')
    else:
        print('end', end=' ')
    print(d, end=' ')
    
except: print('error')
