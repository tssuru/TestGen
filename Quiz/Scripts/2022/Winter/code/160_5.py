try:
    
    a,b,c=9,7,9
    def f(a,b=8,c=6):
        print(a,b,c,end="")
    
    f(1,a=3)
    print(a,b,c)
    
except: print('error')
