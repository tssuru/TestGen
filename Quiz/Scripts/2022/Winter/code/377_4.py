try:
    def g(d):
        v=68
        if d!=-5: 
            v=9
        elif d<0:
             return 1
        else:
             return 7
        return v
    
    print(g(6))
    
except: print('error')
