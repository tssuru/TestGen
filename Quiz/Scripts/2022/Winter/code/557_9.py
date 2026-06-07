try:
    for a in range(-2, 2):
        if a > 0:
            break
            print(a, end=' ')
            a = -1
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
