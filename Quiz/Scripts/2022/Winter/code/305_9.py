try:
    for a in range(-2, 8, 3):
        if a > 3:
            break
            print(a, end=' ')
            a = 2
        else:
            print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
