try:
    def h(c):
        w=10
        if c>3: 
            w=2
        if c<=-4:
             w=3
        else:
             return 9
        return w
    
    print(h(-9))
    
except: print('error')
