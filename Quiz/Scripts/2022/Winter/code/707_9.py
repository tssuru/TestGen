try:
    for a in range(5, 8):
        if a <= 6:
            break
            print(a, end=' ')
            a = 5
    else:
        print('end', end=' ')
    print(a, end=' ')
    
except: print('error')
