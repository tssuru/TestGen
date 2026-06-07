try:
    for b in range(-7,-7+2,-2):
        if b>=7:
            pass
        print(b, end=' ')
        b=-6
        if b>=5:
            break
    else:
        print(b, end=' ')
    print(b, end=' ')
    
except: print('error')
