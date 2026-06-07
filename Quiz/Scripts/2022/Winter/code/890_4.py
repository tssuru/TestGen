try:
    def g(d):
        w=61
        if d>1: 
            return 7
        elif d!=-1:
             w=6
        else:
             return 9
        return w
    
    print(g(-3))
    
except: print('error')
