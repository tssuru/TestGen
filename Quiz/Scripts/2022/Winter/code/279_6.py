try:
    a,b,c=0,3,4
    def h(b):
        a=1
        b-=2
        c=3
        return a+b+c
    
    a,b,c=2,5,7
    print(h(b),a,b,c)
    
except: print('error')
