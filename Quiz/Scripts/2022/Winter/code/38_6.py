try:
    a,b,c=3,4,8
    def g(b):
        global c
        a+=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,9,6
    print(g(b),a,b,c)
    
except: print('error')
