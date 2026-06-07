try:
    a,b,c=8,1,4
    def h(b):
        global c
        a=3
        b*=2
        c=5
        return a+b+c
    
    a,b,c=5,0,9
    print(h(b),a,b,c)
    
except: print('error')
