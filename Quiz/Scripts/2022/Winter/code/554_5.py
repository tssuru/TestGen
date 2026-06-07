try:
    
    a,b,c=6,9,7
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(a=3,2,b=0)
    print(a,b,c)
    
except: print('error')
