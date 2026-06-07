try:
    def h(a):
        u=75
        if a: 
            u=9
        elif a>-4:
             return 4
        else:
             u=3
        return u
    
    print(h(-5))
except: print('error')
