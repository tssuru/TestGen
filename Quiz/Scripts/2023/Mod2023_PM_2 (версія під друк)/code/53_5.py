try:
    for b in range(7,7+5,-2):
        if b>=8:
            pass
        print(b, end=' ')
        b=-10
        if b<7:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
