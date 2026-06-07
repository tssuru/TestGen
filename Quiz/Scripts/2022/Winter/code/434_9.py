try:
    for a in range(3):
        if a <= 1:
            break
            print(a, end=' ')
            a = 0
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
