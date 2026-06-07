try:
    for a in range(-2,-2+6,-2):
        if a<3:
            break
        print(a, end=' ')
        a=-10
    else:
        print(13, end=' ')
    print(a, end=' ')
    
except: print('error')
