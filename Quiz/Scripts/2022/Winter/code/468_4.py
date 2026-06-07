try:
    def g(c):
        x=29
        if c!=4: 
            x=7
        elif c>1:
             return 1
        else:
             return 4
        return x
    
    print(g(0))
    
except: print('error')
