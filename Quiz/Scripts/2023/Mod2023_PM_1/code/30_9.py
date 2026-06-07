try:
    a,b,c=3,7,1
    def h(b):
        a=2
        b-=1
        c=5
        return a+b+c
    
    a,b,c=5,4,2
    print(h(b),a,b,c)
    
except: print('error')
