try:
    for a in range(3,3+3,2):
        if a>=4:
            break
        print(a, end=' ')
        a=-10
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
