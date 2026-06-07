try:
    a,b,c=0,1,9
    def h(a):
        global c
        a=4
        b-=3
        c=2
        return a+b+c
    
    a,b,c=3,7,5
    print(h(b),a,b,c)
    
except: print('error')
