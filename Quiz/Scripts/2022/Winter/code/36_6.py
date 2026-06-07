try:
    a,b,c=4,7,5
    def h(b):
        a=4
        b-=1
        c=3
        return a+b+c
    
    a,b,c=9,3,6
    print(h(b),a,b,c)
    
except: print('error')
