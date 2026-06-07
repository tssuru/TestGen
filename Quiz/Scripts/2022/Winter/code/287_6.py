try:
    a,b,c=7,5,6
    def h(a):
        global c
        a*=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=0,4,1
    print(h(b),a,b,c)
    
except: print('error')
