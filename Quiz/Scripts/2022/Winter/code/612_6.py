try:
    a,b,c=0,7,4
    def h(a):
        global c
        a=3
        b-=5
        c=4
        return a+b+c
    
    a,b,c=9,2,3
    print(h(b),a,b,c)
    
except: print('error')
