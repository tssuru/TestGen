try:
    
    a,b,c=6,9,7
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(b=4,a=0,b=1)
    print(a,b,c)
    
except: print('error')
