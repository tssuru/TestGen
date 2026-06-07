try:
    def g(d):
        v=17
        if d: 
            return 2
        elif d!=1:
             v=1
        else:
             v=0
        return v
    
    print(g(-4))
    
except: print('error')
