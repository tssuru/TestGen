try:
    
    a,b,c=7,6,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(a=0,1,b=3)
    print(a,b,c)
    
except: print('error')
