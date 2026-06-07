try:
    a,b,c=9,3,4
    def g(a):
        global c
        a=1
        b+=3
        c=5
        return a+b+c
    
    a,b,c=7,9,0
    print(g(b),a,b,c)
    
except: print('error')
