try:
    
    a,b,c=8,7,6
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(2,c=3)
    print(a,b,c)
    
except: print('error')
