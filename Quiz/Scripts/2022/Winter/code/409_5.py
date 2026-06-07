try:
    
    a,b,c=6,9,7
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(a=4,1,a=3)
    print(a,b,c)
    
except: print('error')
