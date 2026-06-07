try:
    
    a,b,c=8,7,9
    def f(a,b=6,c=6):
        print(a,b,c,end="")
    
    f(1,0)
    print(a,b,c)
    
except: print('error')
