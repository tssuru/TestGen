try:
    a,b,c=4,8,0
    def h(b):
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=5,3,2
    print(h(b),a,b,c)
    
except: print('error')
