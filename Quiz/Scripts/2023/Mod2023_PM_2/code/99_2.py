try:
    a,b,c=2,3,4
    def h(a):
        global c
        a-=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,1,7
    print(h(b),a,b,c)
    
except: print('error')
