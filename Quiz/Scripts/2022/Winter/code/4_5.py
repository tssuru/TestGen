try:
    
    a,b,c=7,6,9
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(1,2,b=0)
    print(a,b,c)
    
except: print('error')
