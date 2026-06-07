try:
    def g(d):
        w=79
        if d: 
            return 1
        elif d!=3:
             w=6
        else:
             w=5
        return w
    
    print(g(9))
    
except: print('error')
