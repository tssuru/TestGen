try:
    for e in range(1, 10, 3):
        if e > 5:
            break
            print(e, end=' ')
            e = 4
    else:
        print('end', end=' ')
    print(e, end=' ')
    
except: print('error')
