try:
    def g(b):
        x=11
        if b: 
            return 7
        if b==-1:
             x=8
        else:
             return 0
        return x
    
    print(g(0))
    
except: print('error')
