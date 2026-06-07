try:
    a,b,c=7,1,3
    def g(a):
        global c
        a+=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=6,4,5
    print(g(b),a,b,c)
    
except: print('error')
