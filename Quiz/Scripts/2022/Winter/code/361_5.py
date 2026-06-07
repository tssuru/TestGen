try:
    
    a,b,c=9,6,7
    def f(a,b=8,c=9):
        print(a,b,c,end="")
    
    f(a=1,0,b=2)
    print(a,b,c)
    
except: print('error')
