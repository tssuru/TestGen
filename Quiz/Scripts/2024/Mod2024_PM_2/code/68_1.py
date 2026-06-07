try:
    a,b,c=3,9,4
    def g(a):
        global c
        a+=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=1,5,7
    print(g(b),a,b,c)
    
except: print('error')
