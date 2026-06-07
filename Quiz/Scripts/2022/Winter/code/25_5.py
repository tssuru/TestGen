try:
    
    a,b,c=8,6,7
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(a=3,c=4,b=5)
    print(a,b,c)
    
except: print('error')
