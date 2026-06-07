try:
    for a in range(-2, -5, -1):
        if a <= -4:
            break
            print(a, end=' ')
            a = -5
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
