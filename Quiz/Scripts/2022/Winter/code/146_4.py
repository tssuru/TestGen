try:
    def g(b):
        v=68
        if b: 
            return 7
        elif b!=5:
             return 6
        else:
             v=7
        return v
    
    print(g(-2))
    
except: print('error')
