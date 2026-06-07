try:
    def f(c):
        w=93
        if c>=0: 
            return 4
        elif c<=-2:
             w=8
        else:
             return 3
        return w
    
    print(f(-6))
    
except: print('error')
