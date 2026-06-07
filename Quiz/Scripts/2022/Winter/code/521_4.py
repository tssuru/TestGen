try:
    def g(a):
        w=84
        if a: 
            return 3
        if a<=5:
             w=2
        else:
             return 0
        return w
    
    print(g(-2))
    
except: print('error')
