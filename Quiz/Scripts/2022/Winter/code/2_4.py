try:
    def h(c):
        v=57
        if c<=2: 
            v=8
        elif c>=-3:
             return 0
        else:
             return 1
        return v
    
    print(h(1))
    
except: print('error')
