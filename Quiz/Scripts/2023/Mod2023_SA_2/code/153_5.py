try:
    for b in range(5,5+5,-2):
        if b>=8:
            break
        print(b, end=' ')
        b=-1
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
