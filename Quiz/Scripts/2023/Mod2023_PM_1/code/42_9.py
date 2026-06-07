try:
    a,b,c=2,0,4
    def h(a):
        a=4
        b-=2
        c=5
        return a+b+c
    
    a,b,c=3,1,9
    print(h(b),a,b,c)
    
except: print('error')
