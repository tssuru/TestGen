try:
    def f(b):
        u=44
        if b>2: 
            return 4
        if b<=-4:
             u=1
        else:
             return 9
        return u
    
    print(f(-7))
    
except: print('error')
