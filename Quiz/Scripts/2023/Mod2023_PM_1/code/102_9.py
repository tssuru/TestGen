try:
    a,b,c=9,5,3
    def h(a):
        a=5
        b-=5
        c=1
        return a+b+c
    
    a,b,c=0,6,1
    print(h(b),a,b,c)
    
except: print('error')
