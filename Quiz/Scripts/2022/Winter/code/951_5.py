try:
    
    a,b,c=7,6,7
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(3,c=1,b=5)
    print(a,b,c)
    
except: print('error')
