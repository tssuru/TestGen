try:
    a,b,c=5,1,7
    def h(a):
        global c
        a=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=8,2,0
    print(h(b),a,b,c)
    
except: print('error')
