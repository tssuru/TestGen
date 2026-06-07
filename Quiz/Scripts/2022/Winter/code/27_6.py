try:
    a,b,c=3,6,4
    def h(b):
        a+=1
        b=1
        c=3
        return a+b+c
    
    a,b,c=1,2,7
    print(h(b),a,b,c)
    
except: print('error')
