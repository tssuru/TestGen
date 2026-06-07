try:
    def g(d):
        w=48
        if d: 
            w=7
        elif d==4:
             return 4
        else:
             w=0
        return w
    
    print(g(-4))
    
except: print('error')
