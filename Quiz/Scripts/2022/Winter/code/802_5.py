try:
    
    a,b,c=8,6,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(0,1,b=5)
    print(a,b,c)
    
except: print('error')
