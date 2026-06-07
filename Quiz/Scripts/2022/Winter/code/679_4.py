try:
    def g(c):
        y=33
        if c: 
            return 7
        elif c>=3:
             y=2
        else:
             return 1
        return y
    
    print(g(8))
    
except: print('error')
