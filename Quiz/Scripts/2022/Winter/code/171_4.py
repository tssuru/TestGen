try:
    def h(a):
        u=99
        if a: 
            return 1
        elif a>=0:
             return 5
        else:
             u=8
        return u
    
    print(h(2))
    
except: print('error')
