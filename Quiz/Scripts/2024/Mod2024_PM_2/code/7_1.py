try:
    a,b,c=0,5,1
    def h(b):
        a=4
        b-=2
        c=1
        return a+b+c
    
    a,b,c=4,7,8
    print(h(b),a,b,c)
    
except: print('error')
