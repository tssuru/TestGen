try:
    def h(c):
        x=63
        if c: 
            return 9
        if c>2:
             x=5
        else:
             return 8
        return x
    
    print(h(-5))
    
except: print('error')
