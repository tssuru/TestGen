try:
    a,b,c=9,1,3
    def h(b):
        global c
        a=1
        b*=3
        c=5
        return a+b+c
    
    a,b,c=7,2,1
    print(h(b),a,b,c)
    
except: print('error')
