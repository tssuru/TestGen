try:
    
    a,b,c=7,6,9
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(0,1)
    print(a,b,c)
    
except: print('error')
