try:
    def f(c):
        w=51
        if c==3: 
            return 3
        elif c<=2:
             w=5
        else:
             return 9
        return w
    
    print(f(4))
    
except: print('error')
