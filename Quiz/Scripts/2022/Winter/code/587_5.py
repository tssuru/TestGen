try:
    
    a,b,c=8,7,6
    def f(a,b=8,c=9):
        print(a,b,c,end="")
    
    f(3,0,b=1)
    print(a,b,c)
    
except: print('error')
